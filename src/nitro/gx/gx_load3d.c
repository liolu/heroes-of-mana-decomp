/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState sClrImg;
extern const u16 sTexStartAddrTable[16][3];
extern s32 GX_ResetBankForTex(void);
typedef unsigned char u8;
extern u32 GXi_DmaId;
extern void MIi_CpuCopy32(const void *src, void *dest, u32 size);
extern void MI_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);

/* func_02005c4c from projets/blue-dragon-awakened-shadow/src/donor/func_02005c4c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_BeginLoadTex(void) {
    s32 bank                    = GX_ResetBankForTex();
    sClrImg.texBank       = bank;
    sClrImg.texStartAddr  = sTexStartAddrTable[bank][0] << 12;
    sClrImg.texStartAddr2 = sTexStartAddrTable[bank][1] << 12;
    sClrImg.texSize1      = sTexStartAddrTable[bank][2] << 12;
}

/* func_02005ca8 from projets/blue-dragon-awakened-shadow/src/donor/func_02005ca8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
static inline void UnkGxCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        MI_DmaCopy32(dmaNo, src, dest, size);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        MI_DmaCopy32Async(dmaNo, src, dest, size, 0, 0);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

void GX_LoadTex(const void *src, u32 destSlotAddr, u32 size) {
    void *dest;

    if (sClrImg.texStartAddr2 == 0) {
        dest = (void *) (sClrImg.texStartAddr + destSlotAddr);
    } else if (destSlotAddr + size < sClrImg.texSize1) {
        dest = (void *) (sClrImg.texStartAddr + destSlotAddr);
    } else if (destSlotAddr >= sClrImg.texSize1) {
        dest = (void *) (sClrImg.texStartAddr2 + destSlotAddr - sClrImg.texSize1);
    } else {
        void *dest2 = (void *) sClrImg.texStartAddr2;
        u32 size1   = sClrImg.texSize1 - destSlotAddr;
        UnkGxCopy32(GXi_DmaId, src, (void *) (sClrImg.texStartAddr + destSlotAddr), size1);
        UnkGxCopy32Async(GXi_DmaId, (u8 *) src + size1, dest2, size - size1);
        return;
    }
    UnkGxCopy32Async(GXi_DmaId, src, dest, size);
}

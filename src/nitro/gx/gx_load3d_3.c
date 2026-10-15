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
extern const u16 sTexPlttStartAddrTable[8];
extern s32 GX_ResetBankForTexPltt(void);
extern u32 GXi_DmaId;
extern void MIi_CpuCopy32(const void *src, void *dest, u32 size);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);

/* func_02005e34 from projets/blue-dragon-awakened-shadow/src/donor/func_02005e34.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_BeginLoadTexPltt(void) {
    s32 bank                       = GX_ResetBankForTexPltt();
    sClrImg.texPlttBank      = bank;
    sClrImg.texPlttStartAddr = sTexPlttStartAddrTable[bank >> 4] << 12;
}

/* func_02005e68 from projets/blue-dragon-awakened-shadow/src/donor/func_02005e68.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        MI_DmaCopy32Async(dmaNo, src, dest, size, 0, 0);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

void GX_LoadTexPltt(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(GXi_DmaId, src, (void *) (sClrImg.texPlttStartAddr + destSlotAddr), size);
}

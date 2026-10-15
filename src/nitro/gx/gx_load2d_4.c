/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef struct {
    s32 subBgExtPltt;
    u32 objExtPlttAddr;
    s32 objExtPltt;
    u32 bgExtPlttOffset;
    u32 bgExtPlttAddr;
    s32 bgExtPltt;
    s32 subObjExtPltt;
} UnkGxExtPlttState;
extern UnkGxExtPlttState sSubBGExtPltt;
extern s32 GX_ResetBankForBGExtPltt(void);
extern u32 GXi_DmaId;
extern void MIi_CpuCopy32(const void *src, void *dest, u32 size);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);

/* func_02005884 from projets/blue-dragon-awakened-shadow/src/donor/func_02005884.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
void GX_BeginLoadBGExtPltt(void) {
    sSubBGExtPltt.bgExtPltt = GX_ResetBankForBGExtPltt();

    switch (sSubBGExtPltt.bgExtPltt) {
        case 0x00:
            break;
        case 0x10:
            sSubBGExtPltt.bgExtPlttAddr   = 0x6880000;
            sSubBGExtPltt.bgExtPlttOffset = 0;
            break;
        case 0x40:
            sSubBGExtPltt.bgExtPlttAddr   = 0x6894000;
            sSubBGExtPltt.bgExtPlttOffset = 0x4000;
            break;
        case 0x20:
        case 0x60:
            sSubBGExtPltt.bgExtPlttAddr   = 0x6890000;
            sSubBGExtPltt.bgExtPlttOffset = 0;
            break;
        default:
            break;
    }
}

/* func_02005924 from projets/blue-dragon-awakened-shadow/src/donor/func_02005924.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        MI_DmaCopy32Async(dmaNo, src, dest, size, 0, 0);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

void GX_LoadBGExtPltt(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(GXi_DmaId, src, (void *) (sSubBGExtPltt.bgExtPlttAddr + destSlotAddr - sSubBGExtPltt.bgExtPlttOffset),
                     size);
}

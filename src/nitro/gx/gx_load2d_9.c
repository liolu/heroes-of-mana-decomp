/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
extern u32 GXi_DmaId;
extern void MIi_CpuCopy32(const void *src, void *dest, u32 size);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);

/* func_02005aec from projets/blue-dragon-awakened-shadow/src/donor/func_02005aec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        MI_DmaCopy32Async(dmaNo, src, dest, size, 0, 0);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

void GXS_LoadBGExtPltt(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(GXi_DmaId, src, (void *) (0x6898000 + destSlotAddr), size);
}

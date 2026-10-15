/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned char u8;
extern u32 GXi_DmaId;
extern void MIi_CpuCopy32(const void *src, void *dest, u32 size);
extern void MI_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);

/* func_020051d4 from projets/blue-dragon-awakened-shadow/src/donor/func_020051d4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
static inline void UnkGxCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        MI_DmaCopy32(dmaNo, src, dest, size);
    } else {
        MIi_CpuCopy32(src, dest, size);
    }
}

static inline void *UnkGetObjCharPtr(void) {
    return (void *) 0x6400000;
}

void GX_LoadOBJ(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *) UnkGetObjCharPtr();
    UnkGxCopy32(GXi_DmaId, src, base + offset, size);
}

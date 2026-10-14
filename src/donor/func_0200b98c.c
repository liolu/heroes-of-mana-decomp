/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200522c from projets/blue-dragon-awakened-shadow/src/donor/func_0200522c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
extern u32 data_02035ab0;
extern void func_020102c4(const void *src, void *dest, u32 size);
extern void func_0200fe88(u32 dmaNo, const void *src, void *dest, u32 size);
static inline void UnkGxCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_0200fe88(dmaNo, src, dest, size);
    } else {
        func_020102c4(src, dest, size);
    }
}
static inline void *UnkGetSubObjCharPtr(void) {
    return (void *) 0x6600000;
}
void func_0200b98c(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *) UnkGetSubObjCharPtr();
    UnkGxCopy32(data_02035ab0, src, base + offset, size);
}

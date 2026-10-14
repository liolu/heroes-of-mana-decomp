/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02005e68 from projets/blue-dragon-awakened-shadow/src/donor/func_02005e68.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 data_02035ab0;
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
extern UnkGxLoad3dState data_020385b8;
extern void func_020102c4(const void *src, void *dest, u32 size);
extern void func_02010028(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_02010028(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020102c4(src, dest, size);
    }
}
void func_0200c3ec(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_02035ab0, src, (void *) (data_020385b8.texPlttStartAddr + destSlotAddr), size);
}

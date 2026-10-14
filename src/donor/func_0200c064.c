/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02005a24 from projets/blue-dragon-awakened-shadow/src/donor/func_02005a24.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 data_02035ab0;
typedef struct {
    s32 subBgExtPltt;
    u32 objExtPlttAddr;
    s32 objExtPltt;
    u32 bgExtPlttOffset;
    u32 bgExtPlttAddr;
    s32 bgExtPltt;
    s32 subObjExtPltt;
} UnkGxExtPlttState;
extern UnkGxExtPlttState data_0203859c;
extern void func_020102c4(const void *src, void *dest, u32 size);
extern void func_02010028(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_02010028(dmaNo, src, dest, size, 0, 0);
    } else {
        func_020102c4(src, dest, size);
    }
}
void func_0200c064(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_02035ab0, src, (void *) (data_0203859c.objExtPlttAddr + destSlotAddr), size);
}

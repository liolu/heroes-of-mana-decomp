/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 sPlayer[];
extern void PlayerHeapDisposeCallback();
void *NNS_SndHeapAlloc(void *, s32, void *, s32, s32);
u32 func_0200577c(void *, void *);
void NNS_FndAppendListObject(void *, void *);

u32 func_02004608(s32 idx, void *heap, void *arg) {
    u32 *blk;
    u32 r;
    blk = NNS_SndHeapAlloc(heap, (s32) arg + 0x14, (void *) PlayerHeapDisposeCallback, 0, 0);
    if (blk == NULL) {
        return 0;
    }
    blk[3] = 0;
    blk[4] = idx;
    blk[2] = 0;
    r      = func_0200577c(blk + 5, arg);
    if (r == 0) {
        return 0;
    }
    blk[2] = r;
    NNS_FndAppendListObject(sPlayer + idx * 0x24 + 0xc, blk);
    return 1;
}

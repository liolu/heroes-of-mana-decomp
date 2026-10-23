/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 sPlayer[];
void func_02004568(u32 *);
u8 *func_0200789c(u8 *, s32);
void ForceStopSeq(u8 *);
u32 *func_02003e90(s32);
void InsertPlayerList(u8 *, u32 *);

u32 *NNSi_SndPlayerAllocSeqPlayer(u32 *p, s32 idx, s32 prio) {
    u8 *pl = sPlayer + idx * 0x24;
    u32 *r = (u32 *) *p;
    u8 *o;
    if (r != 0) {
        func_02004568(p);
    }
    if (*(u16 *) (pl + 8) >= *(u32 *) (pl + 0x18)) {
        o = func_0200789c(pl, 0);
        if (o == 0) {
            return 0;
        }
        if (prio < o[0x3d]) {
            return 0;
        }
        ForceStopSeq(o);
    }
    r = func_02003e90(prio);
    if (r == 0) {
        return 0;
    }
    InsertPlayerList(pl, r);
    *r = (u32) p;
    *p = (u32) r;
    return r;
}

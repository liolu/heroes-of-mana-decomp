/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *MakeBlankPosWork(s32, s32);
extern s32 GetBlankPos(void *, s32 *, s32 *);
extern void OS_FreeToHeap(s32, s32, void *);

s32 GetNearDestination(s8 *arg0, s32 *arg1, s32 *arg2) {
    s32 x;
    s32 y;
    void *w;
    w = MakeBlankPosWork(arg0[0x66], arg0[0x67]);
    if (GetBlankPos(w, &x, &y) == 0) {
        if (w != 0) {
            OS_FreeToHeap(0, -1, w);
        }
        return 0;
    }
    *arg1 = arg0[0x66] + x - 5;
    *arg2 = arg0[0x67] + y - 5;
    if (w != 0) {
        OS_FreeToHeap(0, -1, w);
    }
    return 1;
}

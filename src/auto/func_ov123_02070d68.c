/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Q {
    u32 w[8];
} Q;
typedef struct P {
    u8 pad[8];
    Q *q;
    u8 pad2[1];
    s8 mode;
} P;
void OS_InitMessageQueue(Q *, s32 *, s32);
s32 func_ov123_02070df8(void *, P *);
int func_0200e3ec(Q *, s32 *, int);
s32 func_ov123_02070d68(void *a, P *p) {
    s32 res;
    s32 buf;
    Q q;
    if (p->mode == 1) {
        OS_InitMessageQueue(&q, &buf, 1);
        p->q = &q;
        func_ov123_02070df8(a, p);
        func_0200e3ec(&q, &res, 1);
    } else {
        p->q = 0;
        res  = func_ov123_02070df8(a, p);
    }
    return res;
}

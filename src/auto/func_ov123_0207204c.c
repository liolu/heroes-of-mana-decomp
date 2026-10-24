/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Q {
    u8 pad[0xfe];
    s8 f;
} Q;
typedef struct O {
    u8 pad[0x64];
    Q *q;
    u8 pad2[0xb];
    s8 k;
} O;
s32 func_ov123_02071a70(O *, s32, s32, s32, s32, s32);
s32 func_ov123_02071fb4(O *, s32, s32, s32, s32, s32);
void func_ov123_02071c10(O *);

s32 func_ov123_0207204c(O *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 flags) {
    s32 r;
    s32 on;
    Q *q = o->q;
    s8 old;
    if ((flags & 2) && q != NULL) {
        on = 1;
    } else {
        on = 0;
    }
    if (on != 0) {
        old  = q->f;
        q->f = 1;
    }
    if (o->k == 1) {
        r = func_ov123_02071a70(o, a, b, c, d, e);
    } else {
        r = func_ov123_02071fb4(o, a, b, c, d, e);
        if (r >= 0) {
            func_ov123_02071c10(o);
        }
    }
    if (on != 0) {
        q->f = old;
    }
    return r;
}

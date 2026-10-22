/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct R {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} R;
typedef struct P {
    s16 x;
    s16 y;
} P;
typedef struct S {
    s32 first;
    s32 pad;
    u8 arr[12];
} S;
s32 func_ov123_020c98a8(s32);
s32 func_ov123_020c9970(s32, s32);
s32 func_ov123_020c9988(s32, u8, u16, u16, s32, s32, s32, P *);
extern R data_ov123_020d7f84;
extern R data_ov123_020d7f78;
extern u8 data_ov123_020d7f8c;
extern S *data_ov123_020e465c;

void func_ov123_020b9b28(void) {
    R r;
    P p;
    s32 i;
    u8 *q;
    u8 t;
    r   = data_ov123_020d7f84;
    r.c = data_ov123_020d7f78.a;
    r.d = data_ov123_020d7f78.b;
    func_ov123_020c9970(data_ov123_020e465c->first, 0);
    p.y = 0;
    q   = &data_ov123_020d7f8c;
    for (i = 0; i < 12; i++) {
        p.x = data_ov123_020e465c->arr[i];
        t   = *q;
        r.a = t;
        func_ov123_020c9988(data_ov123_020e465c->first, t, r.b, r.c, r.d, 2, 0x480, &p);
        q++;
    }
    func_ov123_020c98a8(data_ov123_020e465c->first);
}

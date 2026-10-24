#include "m2c.h"
typedef struct {
    u32 a : 3;
    u32 f1 : 3;
    u32 v1 : 12;
    u32 f2 : 3;
    u32 v2 : 11;
    u32 w2;
} E;
typedef struct {
    u8 pad[0xc];
    u8 *p;
} T;
extern T *data_0203673c;

s32 func_ov112_020e9600(s32 i, u32 b, u32 c) {
    s32 r;
    E *e;
    if (i == 0) {
        return 0;
    }
    r = 0;
    e = (E *) (data_0203673c->p + 8);
    if (b == e[i].f1 && e[i].f1 != 0) {
        r += e[i].v1;
    }
    if (c == e[i].f2 && e[i].f2 != 0) {
        r -= e[i].v2;
    }
    return r;
}

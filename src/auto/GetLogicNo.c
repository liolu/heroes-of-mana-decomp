/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct T {
    u32 a;
    u32 b;
} T;
typedef struct O {
    u32 a;
    u32 c;
    u32 p1 : 23;
    u32 dir : 4;
    u32 p0 : 5;
    u8 pad[0xdc];
    T *t;
} O;
typedef struct G {
    u32 a[4];
    u32 p1 : 29;
    u32 fl : 1;
    u32 p0 : 2;
    u32 q1 : 8;
    u32 dir : 4;
    u32 q0 : 20;
} G;
extern G *data_ov000_02051548;

s32 GetLogicNo(O *o) {
    s32 r;
    T *t = o->t;
    if (t == NULL) {
        return 0;
    }
    r = (u32) (t->b << 16) >> 24;
    if (t->b >> 31) {
        r += 10;
    } else {
        if (data_ov000_02051548->fl && o->dir <= 1) {
            return r;
        }
        if (data_ov000_02051548->dir != o->dir) {
            r += 5;
        }
    }
    return r;
}

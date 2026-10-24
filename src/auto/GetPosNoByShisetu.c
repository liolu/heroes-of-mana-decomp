/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct F {
    u32 lo : 8;
    u32 f : 4;
    u32 hi : 20;
} F;
typedef struct A {
    u8 pad[0x14];
    F f;
} A;
typedef struct B {
    u8 pad[0x28];
    u8 *p;
} B;
typedef struct E {
    u32 n : 4;
    u32 v : 4;
    u32 rest : 24;
    u32 w;
} E;
extern A *data_ov000_02051548;
extern B *data_0203673c;
s32 GetPosNoByShisetu(s32 k) {
    u8 *b;
    E *e;
    if (k > 8) {
        k = 8;
    }
    b = data_ov000_02051548->f.f * 0x2d0 + data_0203673c->p + 0x21c;
    e = (E *) b + k;
    if (e->n == 0) {
        return -1;
    }
    return e->v;
}

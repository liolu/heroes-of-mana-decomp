/* compiler: 2.0/sp1p5 -profile */
/* near start: 2 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct A {
    s32 a;
    s32 b;
    s32 c;
} A;
typedef struct P {
    u8 pad[0x10];
    s32 v;
} P;
typedef struct O {
    u32 w0;
    u32 w4;
    u8 pad[8];
    P *p;
    u8 pad2[0xe2];
    s16 f6;
    s16 f8;
    s16 fa;
    u16 fc;
} O;
void getAnimation(s32, s32, s32, A *);

void ChgObjAnimeDirect(O *o, s32 id) {
    A a;
    o->f6 = 0;
    getAnimation(o->p->v, id, o->f6, &a);
    o->f8 = a.b;
    o->fa = a.a;
    if (o->fc != a.c) {
        o->fc = a.c;
        o->w0 |= 0x80;
    }
    o->w0 &= ~0x80000000;
    o->w0 &= ~0x40000000;
    o->w0 &= ~4;
    o->w4 &= ~1;
    o->w4 |= 1;
}

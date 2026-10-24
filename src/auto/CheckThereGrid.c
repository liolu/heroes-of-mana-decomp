/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct F {
    u32 pad : 28;
    u32 f28 : 1;
    u32 f29 : 1;
    u32 rest : 2;
} F;
typedef struct G {
    u8 pad[0x10];
    F f;
} G;
typedef struct T {
    u32 pad0 : 8;
    u32 ty : 5;
    u32 rest : 19;
} T;
typedef struct P8 {
    s32 p0;
    u16 pad4;
    u16 h6;
    T t;
} P8;
typedef struct A {
    s32 pad;
    s32 pad2;
} A;
typedef struct Obj {
    s32 pad[2];
    u32 pad2 : 19;
    u32 fl : 3;
    u32 rest : 10;
    u8 pad3[8];
} Obj;
typedef struct Tb {
    u8 pad[8];
    Obj *o;
} Tb;
typedef struct Q {
    u8 pad[0xA];
    u16 ha;
} Q;
typedef struct R {
    Q *q;
    s32 pad;
    P8 *p;
} R;
extern G *data_ov000_02051548;
extern Tb *data_0203673c;
void SetDamageAiteInGrid(s32, u16, s32, s32, s32, u16);

void CheckThereGrid(R *a, s32 b, s32 c, s32 d) {
    P8 *p;
    Q *q;
    if (data_ov000_02051548->f.f29 != 0 && data_ov000_02051548->f.f28 != 0) {
        return;
    }
    p = a->p;
    q = a->q;
    if (p->t.ty == 7) {
        return;
    }
    if (p->t.ty == 3) {
        return;
    }
    if (p->t.ty == 4) {
        return;
    }
    if (((Obj *) ((u8 *) data_0203673c->o + p->h6 * 0x14))->fl == 1) {
        return;
    }
    SetDamageAiteInGrid(p->p0, p->h6, b, c, d, q->ha);
}

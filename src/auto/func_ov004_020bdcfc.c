/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} V3;

typedef struct {
    void *vt;
    s32 p4;
    V3 a;
    V3 b;
    V3 c;
} Obj;

typedef struct {
    s32 pad0;
    s32 f4;
    s32 f8;
    Obj *o;
    s32 f10;
    Obj *o2;
    V3 v18;
    V3 v24;
    V3 v30;
} X;

extern u8 data_ov004_020cdfec[];

Obj *func_0202f3f8(s32);
Obj *func_ov004_020be160(s32);
Obj *func_ov004_020be174(s32, Obj *);
void func_ov004_020be468(V3 *, Obj *);
void func_ov004_020be484(V3 *, Obj *);
void func_ov004_020be4a0(V3 *, Obj *);

void func_ov004_020bdcfc(X *x) {
    V3 s18;
    V3 sC;
    V3 s0;
    Obj *o;

    x->f8 = -1;
    x->o  = func_ov004_020be160(x->f4);
    if (x->o == 0) {
        o = func_0202f3f8(0x2c);
        if (o != 0) {
            o->vt  = data_ov004_020cdfec;
            o->a.x = 0;
            o->a.y = 0;
            o->a.z = 0;
            o->a.x = 0;
            o->a.y = 0;
            o->a.z = 0;
            o->b.x = 0;
            o->b.y = 0;
            o->b.z = 0;
            o->b.x = 0;
            o->b.y = 0;
            o->b.z = 0;
            o->c.x = 0;
            o->c.y = 0;
            o->c.z = 0;
            o->c.x = 0;
            o->c.y = 0;
            o->c.z = 0;
        }
        x->o = o;
    }
    x->f10 = 0;
    x->o2  = func_ov004_020be174(x->f4, x->o);
    if (x->o2 == 0) {
        x->o2 = x->o;
    }
    func_ov004_020be468(&s18, x->o);
    x->v18.x = s18.x;
    x->v18.y = s18.y;
    x->v18.z = s18.z;
    func_ov004_020be484(&sC, x->o);
    x->v24.x = sC.x;
    x->v24.y = sC.y;
    x->v24.z = sC.z;
    func_ov004_020be4a0(&s0, x->o);
    x->v30.x = s0.x;
    x->v30.y = s0.y;
    x->v30.z = s0.z;
}

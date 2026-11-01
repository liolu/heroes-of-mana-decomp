#include "m2c.h"

extern "C" {
typedef struct {
    s32 v;
} FX;
typedef struct {
    FX x;
    FX y;
    FX z;
} V3;

typedef struct {
    u8 pad[4];
    void *p4;
    s32 c8;
    u8 *cc;
    s32 c10;
    u8 *c14;
    FX o[9];
} Obj;

s32 func_ov004_020be460(u8 *);
u8 *func_ov004_020be174(void *, u8 *);
void func_ov004_020b94e0(FX *, s32 *, s32);
V3 func_ov004_020be468(u8 *);
V3 func_ov004_020be484(u8 *);
V3 func_ov004_020be4a0(u8 *);
void func_ov004_020b91ec(FX *, FX, FX, FX);

void func_ov004_020bde48(Obj *o) {
    FX t;
    s32 tt;
    FX f0, f1, f2, f3, f4, f5, f6, f7, f8;
    u8 *r;

    o->c8  = o->c8 + 1;
    o->c10 = o->c10 + 1;
    if (o->c10 >= func_ov004_020be460(o->cc)) {
        r = func_ov004_020be174(o->p4, o->cc);
        if (r != 0) {
            o->cc = r;
        }
        o->c10 = 0;
        o->c14 = func_ov004_020be174(o->p4, o->cc);
        if (o->c14 == 0) {
            o->c14 = o->cc;
        }
    }
    tt = o->c10 << 16;
    func_ov004_020b94e0(&t, &tt, func_ov004_020be460(o->cc));
    func_ov004_020b91ec(&f0, func_ov004_020be468(o->cc).x, func_ov004_020be468(o->c14).x, t);
    o->o[0] = f0;
    func_ov004_020b91ec(&f1, func_ov004_020be468(o->cc).y, func_ov004_020be468(o->c14).y, t);
    o->o[1] = f1;
    func_ov004_020b91ec(&f2, func_ov004_020be468(o->cc).z, func_ov004_020be468(o->c14).z, t);
    o->o[2] = f2;
    func_ov004_020b91ec(&f3, func_ov004_020be484(o->cc).x, func_ov004_020be484(o->c14).x, t);
    o->o[3] = f3;
    func_ov004_020b91ec(&f4, func_ov004_020be484(o->cc).y, func_ov004_020be484(o->c14).y, t);
    o->o[4] = f4;
    func_ov004_020b91ec(&f5, func_ov004_020be484(o->cc).z, func_ov004_020be484(o->c14).z, t);
    o->o[5] = f5;
    func_ov004_020b91ec(&f6, func_ov004_020be4a0(o->cc).x, func_ov004_020be4a0(o->c14).x, t);
    o->o[6] = f6;
    func_ov004_020b91ec(&f7, func_ov004_020be4a0(o->cc).y, func_ov004_020be4a0(o->c14).y, t);
    o->o[7] = f7;
    func_ov004_020b91ec(&f8, func_ov004_020be4a0(o->cc).z, func_ov004_020be4a0(o->c14).z, t);
    o->o[8] = f8;
}
}

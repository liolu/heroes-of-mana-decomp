#include "m2c.h"

typedef struct VO {
    s32 (**vt)(struct VO *);
} VO;

typedef struct {
    u8 p0[0x14];
    VO *a;
    u8 p18[4];
    VO *b;
    u8 p20[4];
    VO *c;
} Src;

typedef struct {
    s32 *vt;
    u8 p4[0x10];
    Src *src;
    s32 obj;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2c;
    s32 f30;
    s32 f34;
} T;

extern s32 data_ov004_020ced20[];
void func_ov004_020c28fc(T *, Src *, s32, s32, s32);
s32 func_ov004_020c1f9c(s32);
void func_ov004_020c05a8(s32 *, s32);
void func_ov004_020c05e8(s32 *, s32);
void func_ov004_020c0628(s32 *, s32);

T *func_ov004_020c6628(T *t, Src *src, s32 id, s32 a3, s32 a4) {
    s32 x;
    s32 y;
    s32 z;
    func_ov004_020c28fc(t, src, id, a3, a4);
    t->vt  = data_ov004_020ced20;
    t->f1c = 0;
    t->f20 = 0;
    t->f24 = 0;
    t->src = src;
    t->f34 = -1;
    t->obj = func_ov004_020c1f9c(id);
    func_ov004_020c05a8(&x, t->obj);
    t->f1c = x;
    func_ov004_020c05e8(&y, t->obj);
    t->f20 = y;
    func_ov004_020c0628(&z, t->obj);
    t->f24 = z;
    t->f28 = src->a != 0 ? (*src->a->vt[6])(src->a) : 0;
    t->f2c = src->b != 0 ? (*src->b->vt[6])(src->b) : 0;
    t->f30 = src->c != 0 ? (*src->c->vt[6])(src->c) : 0;
    return t;
}

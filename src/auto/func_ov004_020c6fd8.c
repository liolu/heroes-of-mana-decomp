#include "m2c.h"
typedef struct {
    s32 w[9];
} V;
typedef struct {
    s32 w[3];
} B;
typedef struct O {
    void *vt;
    s32 p4[4];
    s32 p14;
    V v;
    void *p3c;
    s32 p40;
} O;
extern u8 data_ov004_020ceee8;
void func_ov004_020c28fc(void *, s32, s32, s32, s32);
void func_ov004_020b972c(void *);
s32 func_ov004_020c7294(s32);
void func_ov004_020c29ec(s32 *, s32);
s32 func_ov004_020c1f9c(s32);
s32 func_ov004_020c1fa4(s32);
s32 func_ov004_020c1fac(s32);
V func_ov004_020c29f4(s32 *, s32, s32, s32);
void *func_0202f3f8(s32);
s32 func_ov004_020c729c(s32);
void *func_ov004_020c319c(void *, s32, void *, s32);
B func_ov004_020c37e0(void *);
void func_ov004_020c04dc(s32, B *);
O *func_ov004_020c6fd8(O *this, s32 a, s32 b, s32 c, s32 d) {
    s32 A;
    V t;
    B bb;
    void *p;
    s32 x, y;
    func_ov004_020c28fc(this, a, b, c, d);
    this->vt = &data_ov004_020ceee8;
    func_ov004_020b972c(&this->v);
    this->p14 = a;
    func_ov004_020c29ec(&A, func_ov004_020c7294(a));
    x            = func_ov004_020c1f9c(b);
    y            = func_ov004_020c1fa4(b);
    t            = func_ov004_020c29f4(&A, x, y, func_ov004_020c1fac(b));
    this->v.w[0] = t.w[0];
    this->v.w[1] = t.w[1];
    this->v.w[2] = t.w[2];
    this->v.w[3] = t.w[3];
    this->v.w[4] = t.w[4];
    this->v.w[5] = t.w[5];
    this->v.w[6] = t.w[6];
    this->v.w[7] = t.w[7];
    this->v.w[8] = t.w[8];

    p = func_0202f3f8(0x78);
    if (p != 0) {
        p = func_ov004_020c319c(p, func_ov004_020c729c(a), &this->v, b);
    }
    this->p3c = p;
    this->p40 = func_ov004_020c1f9c(b);
    bb        = func_ov004_020c37e0(this->p3c);
    func_ov004_020c04dc(this->p40, &bb);
    return this;
}

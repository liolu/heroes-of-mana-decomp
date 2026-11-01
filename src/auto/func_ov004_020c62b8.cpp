#include "m2c.h"
struct W {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void *f6();
};
struct Q {
    virtual void f0();
    u32 z;
};
struct A {
    u32 vt;
    u8 p[0x10];
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    void *f24;
};
extern "C" {
extern u8 data_ov004_020cec88[];
extern u8 data_ov004_020ce718[];
void func_ov004_020c28fc(void *, void *, s32, s32, s32);
s32 func_ov004_020c1f9c(s32);
void func_ov004_020c05a8(s32 *, s32);
void func_ov004_020c05e8(s32 *, s32);
void func_ov004_020c0628(s32 *, s32);
W *func_ov004_020c6580(void *);
void *func_0202f3f8(s32);
A *func_ov004_020c62b8(A *a, void *b, s32 c, s32 d, s32 e);
}
A *func_ov004_020c62b8(A *a, void *b, s32 c, s32 d, s32 e) {
    s32 tc;
    s32 t8;
    s32 t4;
    void *obj;
    func_ov004_020c28fc(a, b, c, d, e);
    *(u8 **) a = data_ov004_020cec88;
    a->f18     = 0;
    a->f1c     = 0;
    a->f20     = 0;
    a->f14     = func_ov004_020c1f9c(c);
    func_ov004_020c05a8(&tc, a->f14);
    a->f18 = tc;
    func_ov004_020c05e8(&t8, a->f14);
    a->f1c = t8;
    func_ov004_020c0628(&t4, a->f14);
    a->f20 = t4;
    if (func_ov004_020c6580(b) != 0) {
        obj = func_ov004_020c6580(b)->f6();
    } else {
        obj = func_0202f3f8(8);
        if (obj != 0) {
            *(u8 **) obj     = data_ov004_020ce718;
            ((s32 *) obj)[1] = 0;
        }
    }
    a->f24 = obj;
    return a;
}

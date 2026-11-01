#include "m2c.h"

struct VT {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void *f8(s32);
    virtual void *f9(s32);
    virtual void *f10();
    virtual s32 f11(s32);
};

struct VZ {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
};

extern "C" {
extern void *data_ov123_020e47e8;

void func_ov123_020d47c8(s32 arg0, s32 arg1) {
    s32 t;
    VT *p;
    VT *q;
    VZ *r;

    t = ((VT *) ((u8 *) data_ov123_020e47e8 + 0x27BC))->f11(arg0);
    p = (VT *) ((VT *) ((u8 *) data_ov123_020e47e8 + 0x27BC))->f9(t);
    q = (VT *) p->f10();
    r = (VZ *) q->f8(arg1);
    r->f7();
}
}

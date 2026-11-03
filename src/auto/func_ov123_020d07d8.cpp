#include "m2c.h"
struct A;
struct B {
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
    virtual void f10();
    virtual void f11();
    virtual void f12(s32 a, s32 b, s32 c);
};
struct A {
    virtual void f0();
    virtual void f1();
    virtual void f2(s32 *p);
    s32 pad4[3];
    s32 f10;
    s32 f14;
    s32 f18;
};
extern "C" void func_ov123_020cea00(s32 *, s32 *);
extern "C" void func_ov123_020d07d8(A *a, B *b) {
    s32 sp0;
    func_ov123_020cea00(&sp0, &a->f10);
    a->f2(&sp0);
    b->f12(1, a->f18, a->f14);
}

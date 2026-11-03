#include "m2c.h"

extern "C" void func_ov004_020ca90c(void *, s32);

struct VA {
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
    virtual void f12();
    virtual s32 f13();
};

extern "C" void func_ov004_020ca508(VA *arg0, s32 arg1) {
    if (arg1 == arg0->f13()) {
        return;
    }
    func_ov004_020ca90c(arg0, arg1);
}

#include "m2c.h"

extern "C" s32 func_ov004_020bb234(void *, s32, s32);

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
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19(s32, s32, s32);
    u8 pad[0x38];
    s32 f3c;
};

extern "C" void func_ov004_020bb13c(VA *arg0, s32 arg1, s32 arg2) {
    arg0->f19(arg2, func_ov004_020bb234(arg0, 0, arg1), arg0->f3c);
}

#include "m2c.h"
struct VX {
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
    virtual s32 f16();
    virtual s32 f17();
};
extern "C" {
s32 func_ov004_020bb080(void *, s32, s32);
void func_ov004_020bac98(void *arg0, s32 arg1);
}
extern "C" void func_ov004_020bac98(void *arg0, s32 arg1) {
    u8 *p = (u8 *) arg0;
    s32 r5;
    s32 r2;
    if (arg1 == 1) {
        p[0x18] |= 4;
    } else {
        p[0x18] &= ~4;
    }
    r5                  = ((VX *) arg0)->f16();
    r2                  = ((VX *) arg0)->f17();
    *(s32 *) (p + 0x34) = func_ov004_020bb080(arg0, r5, r2);
}

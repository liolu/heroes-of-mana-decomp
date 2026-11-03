#include "m2c.h"
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
    virtual s32 f11(s32, s32, s32);
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
};
extern "C" {
s32 func_ov123_020d0730(u8 *a, VA *o);
}
s32 func_ov123_020d0730(u8 *a, VA *o) {
    s32 n = *(s32 *) (a + 0x14);
    if (n <= 0) {
        return 3;
    }
    return o->f11(1, *(s32 *) (a + 0x18), n);
}

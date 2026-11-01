#include "m2c.h"

struct One {
    s32 v;
};

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
    virtual s32 f15();
    virtual void f16();
    virtual s32 f17();
};

extern "C" {
void func_ov004_020ca980(u8 *arg0, One a) {
    volatile s32 tmp[2];
    s32 r5;
    s32 r6;

    r6 = a.v;
    r5 = ((VA *) arg0)->f15();
    if (r5 <= (a.v >> 16)) {
        if (r5 <= 0) {
            r6 = 0;
        } else if (((VA *) arg0)->f17() != 1) {
            r6 = r5 << 16;
        } else {
            tmp[1] = r5 << 16;
            tmp[0] = r5 << 16;
            r6     = a.v - (r5 << 16);
        }
    }
    *(s32 *) (arg0 + 0x3C) = r6;
}
}

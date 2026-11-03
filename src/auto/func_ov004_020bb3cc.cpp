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
    virtual void f11();
    virtual s32 f12();
    u8 pad[0x38];
    s32 f3c;
};
extern "C" s32 func_ov004_020bb3cc(VA *arg0, s32 arg1, s32 arg2) {
    s32 m;
    s32 t;

    t = arg0->f12();
    m = arg2 * arg0->f3c;
    return m + t + ((arg1 * 8) / 8);
}

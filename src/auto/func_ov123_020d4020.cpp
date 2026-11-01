#include "m2c.h"
struct VP {
    virtual void *f0();
    virtual void *f1();
    virtual void *f2();
    virtual void *f3();
    virtual void *f4();
    virtual void *f5();
    virtual void *f6();
    virtual void *f7(void *a);
    virtual void *f8();
    virtual void *f9();
    virtual void *f10();
    virtual void *f11();
    virtual void *f12();
    virtual void *f13();
    virtual void *f14();
    virtual void *f15();
};
struct VA {
    virtual s32 f0();
    virtual s32 f1();
    virtual s32 f2();
    virtual s32 f3();
    virtual s32 f4();
    virtual s32 f5();
    virtual s32 f6();
    virtual s32 f7();
    virtual s32 f8();
    virtual s32 f9();
    virtual s32 f10();
    virtual s32 f11();
    virtual s32 f12();
    virtual s32 f13();
    virtual s32 f14();
    virtual s32 f15();
};
extern "C" {
extern s32 data_ov123_020e47e8[];
u16 func_ov123_020d4020(void *arg0) {
    void *o;
    s32 v;
    o = ((VP *) ((u8 *) *(void **) data_ov123_020e47e8 + 0x3bc + 0x2400))->f7(arg0);
    v = ((VA *) o)->f7();
    return (u16) (v - 0x32);
}
}

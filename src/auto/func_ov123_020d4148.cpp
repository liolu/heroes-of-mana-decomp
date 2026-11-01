#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void *f7(s32);
};
struct VB {
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
    virtual void *f10();
};
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void *f8(s32);
};
struct S8 {
    s32 a, b;
};
struct VE {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual S8 f6();
};
extern "C" {
extern u8 *data_ov123_020e47e8;
S8 func_ov123_020d4148(s32 arg1, s32 arg2);
}
extern "C" S8 func_ov123_020d4148(s32 arg1, s32 arg2) {
    void *x;
    void *y;
    void *z;
    x = ((VA *) (data_ov123_020e47e8 + 0x3bc + 0x2400))->f7(arg1);
    y = ((VB *) x)->f10();
    z = ((VC *) y)->f8(arg2);
    return ((VE *) z)->f6();
}

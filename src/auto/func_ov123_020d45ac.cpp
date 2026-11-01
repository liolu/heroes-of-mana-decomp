#include "m2c.h"
struct VO {
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
    virtual s32 f11(s32);
};
struct VP {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void *f9(s32);
};
struct VQ {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
};
extern "C" {
extern u8 *data_ov123_020e47e8;
void func_ov123_020d45ac(s32 arg0);
}
extern "C" void func_ov123_020d45ac(s32 arg0) {
    s32 r;
    void *x;
    r = ((VO *) (data_ov123_020e47e8 + 0x3bc + 0x2400))->f11(arg0);
    x = ((VP *) (data_ov123_020e47e8 + 0x3bc + 0x2400))->f9(r);
    ((VQ *) x)->f8();
}

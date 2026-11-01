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
struct VD {
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
void func_ov123_020d4204(s32 arg0, s32 arg1);
}
extern "C" void func_ov123_020d4204(s32 arg0, s32 arg1) {
    void *x;
    void *y;
    void *z;
    x = ((VA *) (data_ov123_020e47e8 + 0x3bc + 0x2400))->f7(arg0);
    y = ((VB *) x)->f10();
    z = ((VC *) y)->f8(arg1);
    ((VD *) z)->f8();
}

#include "m2c.h"
struct VC0 {
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
    virtual M2C_UNK f15();
};

extern "C" void *data_ov123_020e47e8;

extern "C" void func_ov123_020d3b84(void) {
    ((VC0 *) ((u8 *) data_ov123_020e47e8 + 0xEFC))->f15();
}

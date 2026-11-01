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
    virtual M2C_UNK f8();
};

extern "C" void *data_ov123_020e47e8;

extern "C" void func_ov123_020d3030(void) {
    ((VC0 *) ((u8 *) data_ov123_020e47e8 + 0xEFC))->f8();
}

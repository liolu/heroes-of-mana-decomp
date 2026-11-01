#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual M2C_UNK f4();
};

extern "C" void *data_ov123_020e47e8;

extern "C" void func_ov123_020d3bac(void) {
    ((VC0 *) ((u8 *) data_ov123_020e47e8 + 0x7514))->f4();
}

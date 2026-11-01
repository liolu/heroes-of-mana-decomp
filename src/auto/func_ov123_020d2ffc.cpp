#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual s32 f6();
};

extern "C" void *data_ov123_020e47e8;

extern "C" s32 func_ov123_020d2ffc(void) {
    if (((VC0 *) ((u8 *) data_ov123_020e47e8 + 0xEFC))->f6() == 0) {
        return 1;
    }
    return 0;
}

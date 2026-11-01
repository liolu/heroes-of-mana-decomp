#include "m2c.h"
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
s32 func_ov123_020d15f0(void *arg0, void *arg1) {
    s32 r;
    r                             = ((VA *) arg1)->f14();
    *(u8 *) ((u8 *) arg0 + 0x57c) = (r > 0);
    return 1;
}
}

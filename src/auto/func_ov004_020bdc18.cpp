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
};

extern "C" {
extern u8 data_ov004_020cdf24[];

void *func_ov004_020bdc18(u8 *arg0, s32 arg1) {
    *(void **) (arg0 + 0)  = (void *) data_ov004_020cdf24;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0;
    *(s32 *) (arg0 + 0x20) = 0;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0;
    *(s32 *) (arg0 + 0x20) = 0;
    *(s32 *) (arg0 + 0x24) = 0;
    *(s32 *) (arg0 + 0x28) = 0;
    *(s32 *) (arg0 + 0x2C) = 0;
    *(s32 *) (arg0 + 0x24) = 0;
    *(s32 *) (arg0 + 0x28) = 0;
    *(s32 *) (arg0 + 0x2C) = 0;
    *(s32 *) (arg0 + 0x30) = 0;
    *(s32 *) (arg0 + 0x34) = 0;
    *(s32 *) (arg0 + 0x38) = 0;
    *(s32 *) (arg0 + 0x30) = 0;
    *(s32 *) (arg0 + 0x34) = 0;
    *(s32 *) (arg0 + 0x38) = 0;
    *(s32 *) (arg0 + 4)    = arg1;
    ((VA *) arg0)->f8();
    return arg0;
}
}

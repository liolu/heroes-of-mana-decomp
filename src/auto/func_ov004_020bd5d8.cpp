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
extern s32 data_ov004_020cdde8[];
void *func_ov004_020bd5d8(void *arg0, s32 arg1) {
    *(void **) arg0              = (void *) data_ov004_020cdde8;
    *(u8 *) ((u8 *) arg0 + 0x18) = 0;
    *(u8 *) ((u8 *) arg0 + 0x19) = 0;
    *(u8 *) ((u8 *) arg0 + 0x1a) = 0;
    *(u8 *) ((u8 *) arg0 + 0x1b) = 0xff;
    *(s32 *) ((u8 *) arg0 + 4)   = arg1;
    ((VA *) arg0)->f3();
    return arg0;
}
}

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
extern s32 data_ov004_020cd76c[];
void *func_ov004_020ba7bc(void *arg0, s32 a, s32 b, s32 c);
void *func_ov004_020bb0b8(void *arg0, s32 arg1, s32 arg2) {
    s32 v;
    s32 x;
    func_ov004_020ba7bc(arg0, 2, arg1, arg2);
    *(void **) arg0               = (void *) data_ov004_020cd76c;
    v                             = ((VA *) arg0)->f8();
    x                             = v << 2;
    *(s32 *) ((u8 *) arg0 + 0x3c) = x / 8;
    return arg0;
}
}

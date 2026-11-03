#include "m2c.h"

struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *out);
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual s32 f10(s32 a, s32 b, s32 c);
    virtual s32 f11(s32 a, s32 b);
    virtual void f12(s32 a, s32 b, s32 c);
};

extern "C" s32 func_ov123_020cf760(u8 *arg0, VB *arg1) {
    s32 t0;

    if (*(s32 *) (arg0 + 0x181C) <= 0) {
        return 3;
    }
    t0 = *(s32 *) (arg0 + 0x1820);
    return arg1->f10(1, t0, *(s32 *) (arg0 + 0x181C));
}

#include "m2c.h"

struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
    virtual void f4();
    virtual void f5(s32);
};

extern "C" {
extern u8 data_ov004_020cf0b8[];
void func_ov004_020c28fc(u8 *, s32, s32, s32, s32);
s32 func_ov004_020c793c(s32);
void func_ov004_020c7710(s32 *, s32);
s32 func_ov004_020c1fa4(s32);
s32 func_ov004_020c1fac(s32);
void *func_ov004_020c7718(s32 *, s32, s32);
s32 func_ov004_020c7944(s32);

void *func_ov004_020c77e4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp4;
    s32 temp_r5;
    VB *temp_r0;

    func_ov004_020c28fc(arg0, arg1, arg2, arg3, arg4);
    *(u8 **) arg0          = data_ov004_020cf0b8;
    *(s32 *) (arg0 + 0x14) = arg1;
    func_ov004_020c7710(&sp4, func_ov004_020c793c(arg1));
    temp_r5 = func_ov004_020c1fa4(arg2);
    temp_r0 = (VB *) func_ov004_020c7718(&sp4, temp_r5, func_ov004_020c1fac(arg2));
    if (temp_r0 != 0) {
        temp_r0->f3(func_ov004_020c7944(arg1));
    }
    return arg0;
}
}

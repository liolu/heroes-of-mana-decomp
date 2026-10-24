#include "m2c.h"
void func_ov004_020c8c60(void *);
void func_ov004_020c8c80(void *);
s32 func_ov004_020c8c98(void *, s32);
s32 func_ov004_020c8cc4(void *, void *);
s32 func_ov004_020c8d98(void *, void *);
void func_ov004_020c9390(void);
s32 func_ov004_020c93b8(s32, s32);
s32 func_ov004_020c93d8(s32, s32);
s32 func_ov004_020c93f0(s32, s32);
s32 func_ov004_020c9410(s32, s32);
s32 func_ov004_020c9428(s32, s32);
extern u8 data_ov004_020cf6b8;
extern u8 data_ov004_020cf6c0;
extern u8 data_ov004_020cf6c8;
extern u8 data_ov004_020cf6d0;
extern u8 data_ov004_020cf6d8;
extern u8 data_ov004_020cf6e0;

s32 func_ov004_020c9234(s32 arg0, s32 arg1) {
    u8 sp0[8];

    func_ov004_020c9390();
    func_ov004_020c8c60(sp0);
    if ((func_ov004_020c8c98(sp0, arg1) != 1) || (func_ov004_020c8cc4(sp0, &data_ov004_020cf6b8) != 1)) {
        func_ov004_020c8c80(sp0);
        return 0;
    }
    if ((func_ov004_020c93b8(arg0, func_ov004_020c8d98(sp0, &data_ov004_020cf6c0)) == 1) &&
        (func_ov004_020c93d8(arg0, func_ov004_020c8d98(sp0, &data_ov004_020cf6c8)) != 1)) {
        func_ov004_020c8c80(sp0);
        return 0;
    }
    if ((func_ov004_020c93f0(arg0, func_ov004_020c8d98(sp0, &data_ov004_020cf6d0)) == 1) &&
        (func_ov004_020c9410(arg0, func_ov004_020c8d98(sp0, &data_ov004_020cf6d8)) != 1)) {
        func_ov004_020c8c80(sp0);
        return 0;
    }
    if (func_ov004_020c9428(arg0, func_ov004_020c8d98(sp0, &data_ov004_020cf6e0)) != 1) {
        func_ov004_020c8c80(sp0);
        return 0;
    }
    func_ov004_020c8c80(sp0);
    return 1;
}

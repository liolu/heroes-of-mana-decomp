#include "m2c.h"
typedef struct {
    s32 v;
} W;
void func_ov004_020c04dc(s32, void *);
void func_ov004_020c0570(void *, s32);
void func_ov004_020c058c(s32, W);
void func_ov004_020c05b4(W *, s32);
void func_ov004_020c05cc(s32, W);
void func_ov004_020c05f4(W *, s32);
void func_ov004_020c060c(s32, W);
void func_ov004_020c0634(W *, s32);
s32 func_ov004_020c1f9c(s32);
void func_ov004_020c28fc(void *, s32, s32, s32, s32);
extern u8 data_ov004_020cee50;
void **func_ov004_020c6de0(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 sp10[3];
    W spC;
    W sp8;
    W sp4;
    s32 t;
    func_ov004_020c28fc(arg0, arg1, arg2, arg3, arg4);
    *arg0 = &data_ov004_020cee50;
    t     = func_ov004_020c1f9c(arg2);
    func_ov004_020c0570(sp10, t);
    func_ov004_020c04dc(t, sp10);
    func_ov004_020c05b4(&spC, t);
    func_ov004_020c058c(t, spC);
    func_ov004_020c05f4(&sp8, t);
    func_ov004_020c05cc(t, sp8);
    func_ov004_020c0634(&sp4, t);
    func_ov004_020c060c(t, sp4);
    return arg0;
}

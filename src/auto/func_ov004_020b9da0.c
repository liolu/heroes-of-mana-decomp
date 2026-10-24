#include "m2c.h"
extern void func_ov004_020b9d1c(s32 *, s32);
void func_ov004_020b9da0(s32 *arg0, s32 arg1) {
    s32 c, b, a;
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    func_ov004_020b9d1c(&c, arg1);
    arg0[0] = c;
    func_ov004_020b9d1c(&b, arg1);
    arg0[1] = b;
    func_ov004_020b9d1c(&a, arg1);
    arg0[2] = a;
}

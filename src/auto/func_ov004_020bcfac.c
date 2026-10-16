#include "m2c.h"

s32 func_ov004_020b9cf4(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9d1c(s32 *, M2C_UNK);        /* extern */

void func_ov004_020bcfac(void *arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    M2C_FIELD(arg0, s32 *, 4) = func_ov004_020b9cf4(arg1);
    M2C_FIELD(arg0, s32 *, 8) = func_ov004_020b9cf4(arg1);
    func_ov004_020b9d1c(&sp4, arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = sp4;
    func_ov004_020b9d1c(&sp0, arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = sp0;
}

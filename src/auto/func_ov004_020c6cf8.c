#include "m2c.h"

M2C_UNK func_ov004_020b9d1c(s32 *, M2C_UNK);        /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c6cf8(void *arg0, M2C_UNK arg1) {
    s32 sp8;
    s32 sp4;
    s32 sp0;

    func_ov004_020c29a0();
    func_ov004_020b9d1c(&sp8, arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = sp8;
    func_ov004_020b9d1c(&sp4, arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = sp4;
    func_ov004_020b9d1c(&sp0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = sp0;
}

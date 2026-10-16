#include "m2c.h"

s32 func_ov004_020b9a20(M2C_UNK);                   /* extern */
s32 func_ov004_020b9cf4(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c8b94(void *arg0, M2C_UNK arg1) {
    func_ov004_020c29a0();
    M2C_FIELD(arg0, s32 *, 0x10) = func_ov004_020b9a20(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_ov004_020b9cf4(arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = func_ov004_020b9cf4(arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_ov004_020b9cf4(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = func_ov004_020b9cf4(arg1);
}

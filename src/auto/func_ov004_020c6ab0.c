#include "m2c.h"

s32 null(M2C_UNK);                   /* extern */
s8 func_ov004_020b9cd8(M2C_UNK);                    /* extern */
s32 func_ov004_020b9cf4(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c6ab0(void *arg0, M2C_UNK arg1) {
    func_ov004_020c29a0();
    M2C_FIELD(arg0, s32 *, 0x10) = func_ov004_020b9cf4(arg1);
    func_ov004_020b9d44(arg1, 2);
    M2C_FIELD(arg0, s32 *, 0x14) = null(arg1);
    M2C_FIELD(arg0, s8 *, 0x18)  = func_ov004_020b9cd8(arg1);
    func_ov004_020b9d44(arg1, 3);
    M2C_FIELD(arg0, s32 *, 0x1C) = null(arg1);
    M2C_FIELD(arg0, s8 *, 0x20)  = func_ov004_020b9cd8(arg1);
    func_ov004_020b9d44(arg1, 3);
    M2C_FIELD(arg0, s32 *, 0x24) = null(arg1);
    M2C_FIELD(arg0, s8 *, 0x28)  = func_ov004_020b9cd8(arg1);
    func_ov004_020b9d44(arg1, 3);
}

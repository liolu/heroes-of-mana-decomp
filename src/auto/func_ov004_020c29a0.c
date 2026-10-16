#include "m2c.h"

s32 func_ov004_020b9a20(M2C_UNK);                   /* extern */
s32 func_ov004_020b9cf4(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */

void func_ov004_020c29a0(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s32 *, 4) = func_ov004_020b9cf4(arg1);
    func_ov004_020b9d44(arg1, 2);
    M2C_FIELD(arg0, s32 *, 8)   = func_ov004_020b9a20(arg1);
    M2C_FIELD(arg0, s32 *, 0xC) = func_ov004_020b9cf4(arg1);
    func_ov004_020b9d44(arg1, 2);
}

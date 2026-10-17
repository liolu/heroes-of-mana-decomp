#include "m2c.h"

s32 null(M2C_UNK);                   /* extern */
s32 func_ov004_020b9cf4(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c7670(void *arg0, M2C_UNK arg1) {
    func_ov004_020c29a0();
    M2C_FIELD(arg0, s32 *, 0x10) = null(arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = func_ov004_020b9cf4(arg1);
    func_ov004_020b9d44(arg1, 2);
}

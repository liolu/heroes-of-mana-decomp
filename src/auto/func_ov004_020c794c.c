#include "m2c.h"

M2C_UNK func_ov004_020b9c64(M2C_UNK, s32);          /* extern */
s8 func_ov004_020b9cd8(M2C_UNK);                    /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c794c(void *arg0, M2C_UNK arg1) {
    func_ov004_020c29a0();
    func_ov004_020b9c64(arg1, arg0 + 0x10);
    M2C_FIELD(arg0, s8 *, 0x1C) = func_ov004_020b9cd8(arg1);
    func_ov004_020b9d44(arg1, 3);
}

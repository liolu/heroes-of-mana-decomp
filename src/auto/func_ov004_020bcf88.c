#include "m2c.h"

s32 func_0202f3f8(M2C_UNK);                         /* extern */
M2C_UNK func_ov004_020bce7c(s32, M2C_UNK);          /* extern */

void func_ov004_020bcf88(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_0202f3f8(0x10);
    if (temp_r0 == 0) {
        return;
    }
    func_ov004_020bce7c(temp_r0, arg0);
}

#include "m2c.h"

s32 func_0202f3f8(M2C_UNK);                         /* extern */
M2C_UNK func_ov004_020c77e4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_ov004_020c7900(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_0202f3f8(0x18);
    if (temp_r0 == 0) {
        return;
    }
    func_ov004_020c77e4(temp_r0, arg0, arg1, arg2, arg3);
}

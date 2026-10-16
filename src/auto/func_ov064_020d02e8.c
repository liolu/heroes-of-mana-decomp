#include "m2c.h"

M2C_UNK func_ov003_0209bca4(s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_ov003_0209cb30(s32);                       /* extern */

void func_ov064_020d02e8(M2C_UNK arg0) {
    s32 var_r6;

    var_r6 = 0;
    do {
        if (func_ov003_0209cb30(var_r6 + 0xF0D) != 0) {
            func_ov003_0209bca4(var_r6 + 0xF0D, 0x19, arg0, 0);
        }
        var_r6 += 1;
    } while (var_r6 < 0x18);
}

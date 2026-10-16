#include "m2c.h"

M2C_UNK func_ov003_0209a0ec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
s32 func_ov003_0209cb30();                          /* extern */

void func_ov032_020d4418(M2C_UNK arg0, M2C_UNK arg1) {
    M2C_UNK var_r5;

    var_r5 = arg0;
    if (func_ov003_0209cb30() == 0) {
        var_r5 = 0xB;
    }
    func_ov003_0209a0ec(arg1, 1, var_r5, 0, -1, -1, -1);
}

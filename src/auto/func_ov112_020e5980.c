#include "m2c.h"

M2C_UNK func_ov112_020e59bc(s32, M2C_UNK, s32);     /* extern */

void func_ov112_020e5980(s32 arg0, M2C_UNK arg1) {
    s32 temp_r5;
    s32 var_r6;

    temp_r5 = arg0 + 5;
    var_r6  = 0;
    if (temp_r5 <= 0) {
        return;
    }
    do {
        func_ov112_020e59bc(var_r6, arg1, 0);
        var_r6 += 1;
    } while (var_r6 < temp_r5);
}

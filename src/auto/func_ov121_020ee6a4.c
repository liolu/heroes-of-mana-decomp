#include "m2c.h"

M2C_UNK func_ov121_020ee6d8(s32, M2C_UNK);          /* extern */

void func_ov121_020ee6a4(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = arg0 + 3;
    var_r5  = 0;
    if (temp_r4 <= 0) {
        return;
    }
    do {
        func_ov121_020ee6d8(var_r5, arg1);
        var_r5 += 1;
    } while (var_r5 < temp_r4);
}

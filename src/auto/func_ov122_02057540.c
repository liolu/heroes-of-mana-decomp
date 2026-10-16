#include "m2c.h"

M2C_UNK func_ov122_02057574(s32, M2C_UNK);          /* extern */

void func_ov122_02057540(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = arg0 + 0xB;
    var_r5  = 0;
    if (temp_r4 <= 0) {
        return;
    }
    do {
        func_ov122_02057574(var_r5, arg1);
        var_r5 += 1;
    } while (var_r5 < temp_r4);
}

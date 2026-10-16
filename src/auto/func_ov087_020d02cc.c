#include "m2c.h"

M2C_UNK func_ov003_0209ae64(s32);                   /* extern */
s32 func_ov003_0209cb30(s32);                       /* extern */
M2C_UNK func_ov003_0209d04c(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov003_0209ebfc();                      /* extern */

void func_ov087_020d02cc(s32 *arg0, s32 *arg1) {
    s32 temp_r1;
    s32 var_r7;

    var_r7 = 0;
    do {
        if (func_ov003_0209cb30(var_r7 + 0xF20) == 0) {
            if ((var_r7 < 5) && ((s32) *arg0 < 0x64)) {
                func_ov003_0209ebfc();
                func_ov003_0209ae64(var_r7 + 1);
                func_ov003_0209d04c(var_r7 + 0xF20, 0x64);
                *arg0 += 1;
            }
        }
        if ((func_ov003_0209cb30(var_r7 + 0xF0C) == 0) && (func_ov003_0209cb30(var_r7 + 0xF25) == 0)) {
            temp_r1 = *arg0;
            if (temp_r1 < 0x64) {
                if ((*arg1 & (1 << var_r7)) == (1 << var_r7)) {
                    *arg0 = temp_r1 + 1;
                }
                *arg1 |= 1 << var_r7;
                func_ov003_0209ebfc();
                func_ov003_0209ae64(var_r7 + 6);
                func_ov003_0209d04c(var_r7 + 0xF25, 0x64);
            }
        }
        var_r7 += 1;
    } while (var_r7 < 0x14);
}

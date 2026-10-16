#include "m2c.h"

M2C_UNK func_ov003_0209ae64(M2C_UNK);               /* extern */
s32 func_ov003_0209cb30(s32);                       /* extern */
M2C_UNK func_ov003_0209d04c(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov003_0209ebfc();                      /* extern */

void func_ov095_020d02e0(void) {
    s32 var_r5;

    func_ov003_0209ebfc();
    func_ov003_0209ae64(1);
    var_r5 = 0;
    do {
        if (func_ov003_0209cb30(var_r5 + 0xF0C) != 0) {
            func_ov003_0209d04c(var_r5 + 0xF0B, 0x64);
        }
        var_r5 += 1;
    } while (var_r5 < 3);
}

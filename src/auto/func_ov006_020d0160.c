#include "m2c.h"

s32 func_ov003_0209fc10(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020a03f4(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020a06f0(s32, M2C_UNK);          /* extern */

void func_ov006_020d0160(void) {
    s32 var_r5;
    s32 var_r5_2;

    if (func_ov003_0209fc10(0x19) != 0) {
        return;
    }
    var_r5 = 1;
    do {
        func_ov003_020a06f0(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0xD);
    var_r5_2 = 1;
    do {
        func_ov003_020a03f4(var_r5_2, 0);
        var_r5_2 += 1;
    } while (var_r5_2 < 6);
}

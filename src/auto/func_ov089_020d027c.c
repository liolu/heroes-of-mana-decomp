#include "m2c.h"

M2C_UNK CameraMoveAndWait(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32); /* extern */
s32 GetUnitStatus(s32);                       /* extern */

void func_ov089_020d027c(s32 arg0) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r5 = 0;
    var_r4 = 0;
    do {
        if (arg0 == 0) {
            var_r6 = var_r4 + 0xF24;
        } else {
            var_r6 = var_r4 + 0xF10;
        }
        if (GetUnitStatus(var_r6) == 1) {
            var_r5 = var_r6;
        }
        var_r4 += 1;
    } while (var_r4 < 0x14);
    CameraMoveAndWait(0x40, 1, var_r5, 0, -1, -1, -1);
}

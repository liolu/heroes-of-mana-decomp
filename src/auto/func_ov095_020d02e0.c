#include "m2c.h"

M2C_UNK Routine_SetEvPos(M2C_UNK);               /* extern */
s32 GetUnitStatus(s32);                       /* extern */
M2C_UNK RecoverHpOrResourceByPer(s32, M2C_UNK);          /* extern */
M2C_UNK Routine_SetEvPosFadeIn();                      /* extern */

void func_ov095_020d02e0(void) {
    s32 var_r5;

    Routine_SetEvPosFadeIn();
    Routine_SetEvPos(1);
    var_r5 = 0;
    do {
        if (GetUnitStatus(var_r5 + 0xF0C) != 0) {
            RecoverHpOrResourceByPer(var_r5 + 0xF0B, 0x64);
        }
        var_r5 += 1;
    } while (var_r5 < 3);
}

#include "m2c.h"

M2C_UNK Routine_SetEvPos(s32);                   /* extern */
s32 GetUnitStatus(s32);                       /* extern */
M2C_UNK RecoverHpOrResourceByPer(s32, M2C_UNK);          /* extern */
M2C_UNK Routine_SetEvPosFadeIn();                      /* extern */

void func_ov087_020d02cc(s32 *arg0, s32 *arg1) {
    s32 temp_r1;
    s32 var_r7;

    var_r7 = 0;
    do {
        if (GetUnitStatus(var_r7 + 0xF20) == 0) {
            if ((var_r7 < 5) && ((s32) *arg0 < 0x64)) {
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(var_r7 + 1);
                RecoverHpOrResourceByPer(var_r7 + 0xF20, 0x64);
                *arg0 += 1;
            }
        }
        if ((GetUnitStatus(var_r7 + 0xF0C) == 0) && (GetUnitStatus(var_r7 + 0xF25) == 0)) {
            temp_r1 = *arg0;
            if (temp_r1 < 0x64) {
                if ((*arg1 & (1 << var_r7)) == (1 << var_r7)) {
                    *arg0 = temp_r1 + 1;
                }
                *arg1 |= 1 << var_r7;
                Routine_SetEvPosFadeIn();
                Routine_SetEvPos(var_r7 + 6);
                RecoverHpOrResourceByPer(var_r7 + 0xF25, 0x64);
            }
        }
        var_r7 += 1;
    } while (var_r7 < 0x14);
}

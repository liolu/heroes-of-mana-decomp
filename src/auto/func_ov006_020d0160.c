#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(s32, M2C_UNK);          /* extern */
M2C_UNK MemoKeywordFlag(s32, M2C_UNK);          /* extern */

void func_ov006_020d0160(void) {
    s32 var_r5;
    s32 var_r5_2;

    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    var_r5 = 1;
    do {
        MemoKeywordFlag(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0xD);
    var_r5_2 = 1;
    do {
        MemoPersonFlag(var_r5_2, 0);
        var_r5_2 += 1;
    } while (var_r5_2 < 6);
}

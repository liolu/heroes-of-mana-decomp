#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(s32, M2C_UNK);          /* extern */

void func_ov018_020d0160(void) {
    s32 var_r5;

    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    var_r5 = 0x29;
    do {
        MemoKeywordFlag(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0x2D);
    MemoPersonFlag(0x7A, 0);
    MemoPersonFlag(0x43, 0);
    MemoPersonFlag(0x49, 0);
    MemoPersonFlag(0x53, 0);
}

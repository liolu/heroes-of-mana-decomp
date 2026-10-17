#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(s32, M2C_UNK);          /* extern */
M2C_UNK SystemHelpMessageMaxSet(M2C_UNK);               /* extern */

void func_ov007_020d05dc(void) {
    s32 var_r5;

    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    var_r5 = 0xD;
    do {
        MemoKeywordFlag(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0x13);
    MemoPersonFlag(7, 0);
    MemoPersonFlag(0x3D, 0);
    MemoPersonFlag(0x41, 0);
    MemoPersonFlag(0x2A, 0);
    MemoPersonFlag(0x90, 0);
    SystemHelpMessageMaxSet(9);
}

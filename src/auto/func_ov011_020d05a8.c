#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(s32, M2C_UNK);          /* extern */
M2C_UNK SystemHelpMessageMaxSet(M2C_UNK);               /* extern */

void func_ov011_020d05a8(void) {
    s32 var_r5;

    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    var_r5 = 0x1C;
    do {
        MemoKeywordFlag(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0x21);
    MemoPersonFlag(0x13, 0);
    MemoPersonFlag(9, 0);
    MemoPersonFlag(0xB, 0);
    MemoPersonFlag(0x17, 0);
    MemoPersonFlag(0xBB, 0);
    MemoPersonFlag(0x7E, 0);
    MemoPersonFlag(0xC9, 0);
    MemoPersonFlag(0xC1, 0);
    MemoPersonFlag(0xBC, 0);
    MemoPersonFlag(0x4C, 0);
    MemoPersonFlag(0x3E, 0);
    MemoPersonFlag(0x52, 0);
    SystemHelpMessageMaxSet(0x16);
}

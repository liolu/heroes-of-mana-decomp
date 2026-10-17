#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoPersonChange(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(s32, M2C_UNK);          /* extern */
M2C_UNK MemoKeywordChange(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SystemHelpMessageMaxSet(M2C_UNK);               /* extern */

void func_ov009_020d0160(void) {
    s32 var_r5;

    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoPersonChange(1, 0xD0);
    MemoPersonChange(2, 0xD1);
    MemoPersonChange(3, 0xD2);
    MemoPersonChange(4, 0xD3);
    MemoPersonChange(5, 0xD4);
    MemoKeywordChange(0xC, 0x3B);
    MemoKeywordChange(0x16, 0x17);
    var_r5 = 0x18;
    do {
        MemoKeywordFlag(var_r5, 0);
        var_r5 += 1;
    } while (var_r5 < 0x1A);
    MemoPersonFlag(0x2B, 0);
    MemoPersonFlag(0x51, 0);
    MemoPersonFlag(0x89, 0);
    SystemHelpMessageMaxSet(0x13);
}

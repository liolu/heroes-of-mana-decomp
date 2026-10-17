#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov013_020d05ac(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordFlag(0x25, 0);
    MemoKeywordFlag(0x26, 0);
    MemoPersonFlag(0x14, 0);
    MemoPersonFlag(0xCA, 0);
    MemoPersonFlag(0x7C, 0);
    MemoPersonFlag(0x28, 0);
    MemoPersonFlag(0x2E, 0);
    MemoPersonFlag(0x2F, 0);
    MemoPersonFlag(0x42, 0);
    MemoPersonFlag(0x48, 0);
    MemoPersonFlag(0x56, 0);
}

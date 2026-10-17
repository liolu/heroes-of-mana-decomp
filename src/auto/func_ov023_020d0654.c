#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordChange(M2C_UNK, M2C_UNK);      /* extern */

void func_ov023_020d0654(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordChange(0x15, 0x2E);
    MemoPersonFlag(0x31, 0);
}

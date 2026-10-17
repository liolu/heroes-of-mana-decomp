#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordChange(M2C_UNK, M2C_UNK);      /* extern */

void func_ov035_020d0160(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordChange(0x19, 0x1A);
    MemoKeywordFlag(0x1B, 0);
    MemoPersonFlag(0x32, 0);
    MemoPersonFlag(0x33, 0);
    MemoPersonFlag(0x87, 0);
    MemoPersonFlag(0x12, 0);
    MemoPersonFlag(0xA, 0);
    MemoPersonFlag(0x1D, 0);
    MemoPersonFlag(0x1E, 0);
    MemoPersonFlag(0xC8, 0);
}

#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov019_020d0160(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordFlag(0x2D, 0);
    MemoPersonFlag(0x7D, 0);
    MemoPersonFlag(0x44, 0);
    MemoPersonFlag(0x4A, 0);
    MemoPersonFlag(0x4E, 0);
    MemoPersonFlag(0x88, 0);
}

#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov026_020d0800(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordFlag(0x31, 0);
    MemoKeywordFlag(0x32, 0);
    MemoPersonFlag(0xCC, 0);
    MemoPersonFlag(0x7B, 0);
    MemoPersonFlag(0x46, 0);
    MemoPersonFlag(0x50, 0);
    MemoPersonFlag(0x55, 0);
    MemoPersonFlag(0x58, 0);
}

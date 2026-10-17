#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonChange(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordChange(M2C_UNK, M2C_UNK);      /* extern */

void func_ov024_020d0160(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordChange(0x1B, 0x2F);
    MemoPersonChange(0xC9, 0xD6);
}

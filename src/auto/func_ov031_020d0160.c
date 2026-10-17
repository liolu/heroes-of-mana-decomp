#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonChange(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordChange(M2C_UNK, M2C_UNK);      /* extern */

void func_ov031_020d0160(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordFlag(0x37, 0);
    MemoKeywordFlag(0x39, 0);
    MemoKeywordChange(0x13, 0x3A);
    MemoKeywordChange(0x14, 0x38);
    MemoPersonChange(0xCD, 0xD9);
    MemoPersonChange(0xCE, 0xDA);
    MemoPersonChange(0xD8, 0xDB);
}

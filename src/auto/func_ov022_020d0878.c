#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoPersonChange(M2C_UNK, M2C_UNK);      /* extern */

void func_ov022_020d0878(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoPersonFlag(0xC7, 0);
    MemoPersonFlag(0x80, 0);
    MemoPersonChange(0xCB, 0xD5);
    MemoPersonFlag(0x45, 0);
    MemoPersonFlag(0x4B, 0);
    MemoPersonFlag(0x57, 0);
}

#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov015_020d0160(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoPersonFlag(0x1C, 0);
    MemoPersonFlag(0x29, 0);
    MemoPersonFlag(0x83, 0);
}

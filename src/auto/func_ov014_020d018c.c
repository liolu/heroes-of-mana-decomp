#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov014_020d018c(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoPersonFlag(6, 0);
    MemoPersonFlag(8, 0);
    MemoPersonFlag(0x86, 0);
}

#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov020_020d07fc(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoPersonFlag(0x30, 0);
}

#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov021_020d0160(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoPersonFlag(0xBE, 0);
    MemoPersonFlag(0x7F, 0);
    MemoPersonFlag(0x40, 0);
    MemoPersonFlag(0x4F, 0);
    MemoPersonFlag(0x54, 0);
}

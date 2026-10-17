#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov028_020d0160(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordFlag(0x34, 0);
}

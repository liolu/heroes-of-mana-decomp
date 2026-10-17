#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */

void func_ov017_020d0878(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordFlag(0x28, 0);
    MemoPersonFlag(0x81, 0);
    MemoPersonFlag(0xCE, 0);
    MemoPersonFlag(0x3F, 0);
    MemoPersonFlag(0x4D, 0);
}

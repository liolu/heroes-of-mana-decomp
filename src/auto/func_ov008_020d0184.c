#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordChange(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SystemHelpMessageMaxSet(M2C_UNK);               /* extern */

void func_ov008_020d0184(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordFlag(0x13, 0);
    MemoKeywordFlag(0x14, 0);
    MemoKeywordFlag(0x16, 0);
    MemoKeywordChange(0x12, 0x15);
    MemoPersonFlag(0xCD, 0);
    MemoPersonFlag(0x47, 0);
    SystemHelpMessageMaxSet(0x11);
}

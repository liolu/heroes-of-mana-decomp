#include "m2c.h"

s32 GetFreeScenarioOnOff(M2C_UNK);                   /* extern */
M2C_UNK MemoPersonFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK MemoKeywordFlag(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK SystemHelpMessageMaxSet(M2C_UNK);               /* extern */

void func_ov012_020d0184(void) {
    if (GetFreeScenarioOnOff(0x19) != 0) {
        return;
    }
    MemoKeywordFlag(0x21, 0);
    MemoKeywordFlag(0x22, 0);
    MemoKeywordFlag(0x23, 0);
    MemoPersonFlag(0xCB, 0);
    SystemHelpMessageMaxSet(0x17);
}

#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK KuniNameSet(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK StopClearTimer();                      /* extern */
M2C_UNK StopPlanTimer();                      /* extern */
M2C_UNK SetResultMapReferenceRate();                      /* extern */
M2C_UNK Put__MISSION_WIN();                      /* extern */
M2C_UNK Put__MISSION_LOSE();                      /* extern */
M2C_UNK delete__MISSION_WINLOSEDRAW();                      /* extern */
M2C_UNK MTG_BGM_FadeOutAndChange(M2C_UNK);               /* extern */

void func_ov097_020d0330(s32 arg0) {
    if (arg0 == 1) {
        MTG_BGM_FadeOutAndChange(5);
        Put__MISSION_WIN();
        StopClearTimer();
        StopPlanTimer();
        KuniNameSet(1, 0);
        SetResultMapReferenceRate();
    } else {
        MTG_BGM_FadeOutAndChange(6);
        Put__MISSION_LOSE();
    }
    WaitSyncCounter(0x5A);
    delete__MISSION_WINLOSEDRAW();
}

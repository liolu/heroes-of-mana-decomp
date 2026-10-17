#include "m2c.h"

M2C_UNK MoveOnPlanTimer();                      /* extern */
M2C_UNK SetPlanTimer(M2C_UNK);               /* extern */
extern void *data_ov000_02051548;

void func_ov014_020d0160(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x48) != 1) {
        return;
    }
    SetPlanTimer(0);
    MoveOnPlanTimer();
}

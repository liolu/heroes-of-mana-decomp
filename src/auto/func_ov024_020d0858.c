#include "m2c.h"

M2C_UNK MoveOnPlanTimer();                      /* extern */
extern void *data_ov000_02051548;

void func_ov024_020d0858(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x40) != 1) {
        return;
    }
    MoveOnPlanTimer();
}

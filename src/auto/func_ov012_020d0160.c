#include "m2c.h"

M2C_UNK MoveOnPlanTimer();                      /* extern */
extern void *data_ov000_02051548;

void func_ov012_020d0160(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x44) != 1) {
        return;
    }
    MoveOnPlanTimer();
}

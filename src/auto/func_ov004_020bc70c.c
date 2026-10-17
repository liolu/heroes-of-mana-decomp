#include "m2c.h"

void func_ov004_020bc70c(void *arg0, u32 arg1) {
    switch (arg1) {
        case 0:
            M2C_FIELD(arg0, s32 *, 8) = 0;
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 8) = 1;
            return;
        case 2:
            M2C_FIELD(arg0, s32 *, 8) = 2;
            return;
        case 3:
            M2C_FIELD(arg0, s32 *, 8) = 3;
            return;
        default:
            return;
    }
}

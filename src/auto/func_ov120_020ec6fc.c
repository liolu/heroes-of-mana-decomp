#include "m2c.h"

void func_ov120_020ec6fc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 4;
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

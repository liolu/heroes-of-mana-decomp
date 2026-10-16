#include "m2c.h"

s32 func_ov123_0207b3f4();                          /* extern */

void func_ov123_02089a90(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x90) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    M2C_FIELD(arg0, s32 *, 0x94) = func_ov123_0207b3f4();
}

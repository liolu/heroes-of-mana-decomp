#include "m2c.h"

s32 func_ov123_0207a194(void *, M2C_UNK);           /* extern */

void func_ov123_0207a3d8(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x10) == NULL) {
        return;
    }
    temp_r0 = func_ov123_0207a194(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x10)(temp_r0);
}
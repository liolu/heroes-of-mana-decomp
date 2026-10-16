#include "m2c.h"

void *func_ov123_020ca510(s32, M2C_UNK);            /* extern */

void func_ov123_020c952c(s32 arg0) {
    void *temp_r0;

    temp_r0                      = func_ov123_020ca510(((arg0 + 1) * 4) + 8, 4);
    M2C_FIELD(temp_r0, s16 *, 0) = (s16) (arg0 + 1);
    M2C_FIELD(temp_r0, s8 *, 2)  = 0;
    M2C_FIELD(temp_r0, s8 *, 3)  = 0;
}

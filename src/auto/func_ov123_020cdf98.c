#include "m2c.h"

s32 STD_GetStringLength(s32);                       /* extern */
extern M2C_UNK data_ov123_020e47a4;

s32 func_ov123_020cdf98(void) {
    if (STD_GetStringLength(M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) + 0x4D) > 0) {
        return 1;
    }
    return 0;
}

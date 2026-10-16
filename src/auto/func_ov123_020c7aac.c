#include "m2c.h"

s32 func_ov123_020c56c4(s32);                       /* extern */
s32 func_ov123_020c5784();                          /* extern */
extern s32 data_ov123_020e470c;

s32 func_ov123_020c7aac(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_ov123_020c56c4(arg0 + 0xA);
    if (temp_r0 == 0) {
        return 0;
    }
    M2C_FIELD((data_ov123_020e470c + ((temp_r0 - 1) * 4)), s32 *, 0xAA0) = func_ov123_020c5784();
    return 1;
}

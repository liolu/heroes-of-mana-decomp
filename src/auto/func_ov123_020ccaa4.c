#include "m2c.h"

s32 func_ov123_020997a4();                          /* extern */
M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */

s32 func_ov123_020ccaa4(void) {
    s32 temp_r0;

    temp_r0 = func_ov123_020997a4();
    if (temp_r0 == 0) {
        func_ov123_020cc97c(9, -1);
    }
    return temp_r0;
}

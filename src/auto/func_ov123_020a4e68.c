/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02099548();                          /* extern */
s32 func_ov123_0209a8a4(M2C_UNK);                   /* extern */
s32 func_ov123_0209ab5c(M2C_UNK);                   /* extern */
s32 func_ov123_020a4514(M2C_UNK);                   /* extern */
s32 func_ov123_020a4948(M2C_UNK);                   /* extern */
s32 func_ov123_020a4cb0(s32);                       /* extern */

s32 func_ov123_020a4e68(M2C_UNK arg0, s32 arg1) {
    s32 temp_r4;

    if ((func_ov123_02099548() != 0) || ((arg1 == 1) && (func_ov123_0209ab5c(arg0) == 0)) ||
        (func_ov123_0209a8a4(arg0) == 0)) {
        return 0;
    }
    if (func_ov123_020a4948(arg0) == 1) {
        return 0;
    }
    temp_r4 = func_ov123_020a4514(arg0);
    if (temp_r4 >= func_ov123_020a4cb0(arg1)) {
        return 1;
    }
    return 0;
}

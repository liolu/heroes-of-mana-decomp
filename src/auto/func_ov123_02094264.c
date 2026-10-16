#include "m2c.h"

M2C_UNK OSi_ReferSymbol(s32);                       /* extern */
s32 func_ov123_020a5d64(M2C_UNK);                   /* extern */
s32 func_ov123_020a609c();                          /* extern */
M2C_UNK func_ov123_020a6334(M2C_UNK);               /* extern */

s32 func_ov123_02094264(M2C_UNK arg0) {
    s32 var_r0;
    s32 var_r4;
    s32 temp_r5;

    var_r4 = 0;
    OSi_ReferSymbol(0x02000C04);
    temp_r5 = func_ov123_020a5d64(arg0);
    if (func_ov123_020a609c() != 0) {
        func_ov123_020a6334(arg0);
        var_r4 = 1;
    }
    if (temp_r5 < 0) {
        if (var_r4 != 0) {
            var_r0 = 2;
        } else {
            var_r0 = 3;
        }
        return var_r0;
    }
    if (var_r4 != 0) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

s32 func_ov123_0207e128(s32 *, s32, M2C_UNK);       /* extern */

s32 func_ov123_02080f44(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = *arg0;
    temp_r0 = func_ov123_0207e128(arg0, temp_r4 + 0x440, arg1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    var_r0 = func_ov123_0207e128(arg0, temp_r4 + 0x440, arg2);
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}

#include "m2c.h"

M2C_UNK func_020184e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02018550(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020186e0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020196b0(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020186e0(1, 7);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020184e0(9, arg0);
    var_r0 = func_02018550(9, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}

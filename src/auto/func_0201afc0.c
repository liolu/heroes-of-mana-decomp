#include "m2c.h"

M2C_UNK func_020184e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02018550(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020186e0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0201afc0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_020186e0(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020184e0(0x21, arg0);
    var_r0 = func_02018550(0x21, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}

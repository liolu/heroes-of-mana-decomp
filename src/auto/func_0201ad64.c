#include "m2c.h"

M2C_UNK func_0200e7e8(s32, M2C_UNK);                /* extern */
M2C_UNK func_020184e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02018550(M2C_UNK, M2C_UNK, u32, s32, s32); /* extern */
s32 func_02018698();                                /* extern */

s32 func_0201ad64(M2C_UNK arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02018698();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 > 3U) {
        return 6;
    }
    if (arg1 != 0) {
        if (arg3 == 0) {
            return 6;
        }
        func_0200e7e8(arg3, 0x50);
        goto block_8;
    }
block_8:
    func_020184e0(0x27, arg0);
    var_r0 = func_02018550(0x27, 3, arg1, arg3, arg2);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}

#include "m2c.h"

s32 func_ov003_0206c2d4(M2C_UNK);                   /* extern */
s32 func_ov003_02090978(s32, M2C_UNK);              /* extern */
M2C_UNK func_ov003_02090a7c(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov003_02091be0(M2C_UNK);                   /* extern */

s32 func_ov107_020df9d8(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    func_ov003_02090a7c(arg0, 1);
    temp_r0 = func_ov003_0206c2d4(0x2C);
    if ((temp_r0 != -1) && (func_ov003_02090978(temp_r0, arg0) == 1)) {
        return 1;
    }
    temp_r0_2 = func_ov003_0206c2d4(0x16);
    if ((temp_r0_2 != -1) && (func_ov003_02090978(temp_r0_2, arg0) == 1)) {
        return 1;
    }
    temp_r0_3 = func_ov003_02091be0(arg0);
    if ((temp_r0_3 != -1) && (func_ov003_02090978(temp_r0_3, arg0) == 1)) {
        return 1;
    }
    return 0;
}

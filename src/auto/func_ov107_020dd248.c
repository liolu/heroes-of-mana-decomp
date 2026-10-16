#include "m2c.h"

s32 func_ov003_02090978(s32, M2C_UNK);              /* extern */
M2C_UNK func_ov003_02090a7c(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov003_02091be0(M2C_UNK);                   /* extern */

s32 func_ov107_020dd248(M2C_UNK arg0) {
    s32 temp_r0;

    func_ov003_02090a7c(arg0, 1);
    temp_r0 = func_ov003_02091be0(arg0);
    if ((temp_r0 != -1) && (func_ov003_02090978(temp_r0, arg0) == 1)) {
        return 1;
    }
    return 0;
}

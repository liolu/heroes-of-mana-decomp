#include "m2c.h"

s32 func_ov003_0206c2d4(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, M2C_UNK);              /* extern */

s32 func_ov107_020de0b8(M2C_UNK arg0, s32 arg1) {
    if (func_ov003_02090978(arg1, arg0) == 1) {
        func_ov003_020900e4(3, arg0, arg1, 0);
        return 1;
    }
    if (arg1 != func_ov003_0206c2d4(0)) {
        return 0;
    }
    func_ov003_020900e4(2, arg0, arg1, 0);
    return 1;
}

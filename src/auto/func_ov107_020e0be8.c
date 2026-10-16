#include "m2c.h"

M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02090978(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020909ec();                      /* extern */

void func_ov107_020e0be8(M2C_UNK arg0, M2C_UNK arg1) {
    func_ov003_020909ec();
    if (func_ov003_02090978(arg1, arg0) != 1) {
        return;
    }
    func_ov003_020900e4(3, arg0, arg1, 0);
}

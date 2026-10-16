#include "m2c.h"

M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02090978(M2C_UNK, M2C_UNK);          /* extern */

void func_ov108_020d7f0c(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_ov003_02090978(arg1, arg0) != 1) {
        return;
    }
    func_ov003_020900e4(3, arg0, arg1, 0);
}

#include "m2c.h"

M2C_UNK func_ov003_020665b8(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, M2C_UNK);              /* extern */
s32 func_ov003_02091778();                          /* extern */

void func_ov107_020da158(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_ov003_02091778();
    if (temp_r0 == -1) {
        func_ov003_020665b8(arg0, 0x1A, 6);
    }
    if (func_ov003_02090978(temp_r0, arg0) == 1) {
        func_ov003_020900e4(3, arg0, temp_r0, 0);
        return;
    }
    func_ov003_020665b8(arg0, 0x1A, 6);
}

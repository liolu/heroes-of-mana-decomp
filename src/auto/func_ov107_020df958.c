#include "m2c.h"

u32 func_ov003_02053e50();                          /* extern */
M2C_UNK func_ov003_0206c43c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02090978(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020909ec();                      /* extern */

void func_ov107_020df958(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_ret;

    func_ov003_020909ec();
    if (func_ov003_02090978(arg1, arg0) == 1) {
        temp_ret = func_ov003_02053e50();
        temp_r0  = temp_ret;
        if ((temp_ret % 100) >= 0x32) {
            return;
        }
        func_ov003_0206c43c(arg0, 0xE, 0x131, -1);
        return;
    }
    func_ov003_020900e4(2, arg0, arg1, 0);
}

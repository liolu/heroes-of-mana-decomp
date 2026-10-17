#include "m2c.h"

u32 func_ov003_02053e50();                          /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov003_02090978(s32, M2C_UNK);              /* extern */
M2C_UNK func_ov003_020909c8();                      /* extern */
s32 func_ov003_02091778(M2C_UNK);                   /* extern */

void func_ov107_020e0c24(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_ret;

    func_ov003_020909c8();
    temp_r0 = func_ov003_02091778(arg0);
    if (temp_r0 == -1) {
        return;
    }
    if (func_ov003_02090978(temp_r0, arg0) != 1) {
        return;
    }
    temp_ret  = func_ov003_02053e50();
    temp_r0_2 = temp_ret;
    if ((temp_ret % 100) >= 0x19) {
        return;
    }
    func_ov003_020900e4(3, arg0, temp_r0, 0);
}

#include "m2c.h"

s32 func_0202f3f8(M2C_UNK);                         /* extern */
M2C_UNK func_ov004_020beea4(s32, M2C_UNK);          /* extern */

void func_ov004_020bf688(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_0202f3f8(0x6C);
    if (temp_r0 == 0) {
        return;
    }
    func_ov004_020beea4(temp_r0, arg0);
}

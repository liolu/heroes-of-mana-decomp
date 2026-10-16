#include "m2c.h"

s32 func_0202f3f8(M2C_UNK);                         /* extern */
M2C_UNK func_ov004_020bd058(s32, M2C_UNK);          /* extern */

void func_ov004_020bd2c4(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_0202f3f8(0x10);
    if (temp_r0 == 0) {
        return;
    }
    func_ov004_020bd058(temp_r0, arg0);
}

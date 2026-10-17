#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
u32 GetRnd();                          /* extern */

s32 func_ov107_020e0b3c(void *arg0) {
    s32 var_r0;
    s32 temp_r0;
    s32 temp_ret;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 5) {
        temp_ret = GetRnd();
        temp_r0  = temp_ret;
        if ((temp_ret % 100) > 0x32) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}

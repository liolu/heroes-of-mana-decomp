#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
u32 func_ov003_02053e50();                          /* extern */

s32 func_ov108_020d9d44(void *arg0) {
    s32 temp_r4;
    s32 temp_r0;
    s32 temp_ret;
    void *temp_r1;

    temp_r1  = M2C_FIELD(arg0, void **, 0xE8);
    temp_r4  = 0x64 - func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12));
    temp_ret = func_ov003_02053e50();
    temp_r0  = temp_ret;
    if ((temp_ret % 50) <= temp_r4) {
        return 1;
    }
    return 0;
}

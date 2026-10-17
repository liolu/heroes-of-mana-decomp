#include "m2c.h"

u32 func_ov003_02053e50(u32);                       /* extern */
extern void *data_ov000_02051548;

s32 func_ov107_020dbbc8(void) {
    s32 var_r4;
    u32 temp_r0;
    s32 temp_r0_2;
    s32 temp_ret;

    temp_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) << 0xD) >> 0x1F;
    if (temp_r0 != 0) {
        var_r4 = 0x3C;
    } else {
        var_r4 = 0x1E;
    }
    temp_ret  = func_ov003_02053e50(temp_r0);
    temp_r0_2 = temp_ret;
    if ((temp_ret % 100) > var_r4) {
        return 0;
    }
    return 1;
}

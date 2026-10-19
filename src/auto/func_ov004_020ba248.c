/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 SearchTexPalMap(u32);                       /* extern */
u32 countNoUseTexPal();                          /* extern */
extern void *data_ov000_02051548;

s32 func_ov004_020ba248(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r4;
    u32 n;

    var_r4 = arg1;
    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x13) >> 0x1F) != 0) {
        return 0xF0000000;
    }
    temp_r0_2 = var_r4 & 0x1F;
    if (temp_r0_2 != 0) {
        var_r4 += 0x20 - temp_r0_2;
    }
    if (var_r4 <= 0x20) {
        var_r4 = 0x20;
    }
    n = (u32) var_r4 >> 5;
    if (countNoUseTexPal() < (u32) var_r4 / 32) {
        return 0xF0000000;
    }
    temp_r0 = SearchTexPalMap(n);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + var_r4);
        return temp_r0;
    }
    return 0xF0000000;
}

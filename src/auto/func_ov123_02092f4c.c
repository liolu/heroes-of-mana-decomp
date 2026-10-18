/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02068294();                          /* extern */
M2C_UNK func_ov123_02091334(M2C_UNK);               /* extern */

s8 func_ov123_02092f4c(void *arg0, s8 arg1) {
    s8 var_r4;
    u8 var_r2;
    u8 temp_r1;

    var_r4 = arg1;
    if (var_r4 == 0x11) {
        return var_r4;
    }
    temp_r1 = M2C_FIELD(arg0, u8 *, 0xD12);
    var_r2  = 0;
    for (var_r2 = 0; var_r2 < temp_r1; var_r2++) {
        if (M2C_FIELD((arg0 + (var_r2 * 4)), u8 *, 0x444) == 0) {
            break;
        }
    }
    if (var_r4 == 6) {
        if (temp_r1 == var_r2) {
            if (var_r2 == 0) {
                func_ov123_02091334(5);
            } else {
                func_ov123_02091334(6);
            }
            return 0x11;
        }
        goto block_17;
    }
    if (temp_r1 == 0) {
        return var_r4;
    }
    if (temp_r1 == var_r2) {
        return var_r4;
    }
    if ((u32) M2C_FIELD((arg0 + (var_r2 * 4)), u8 *, 0x446) < 0x14U) {
        return var_r4;
    }
block_17:
    M2C_FIELD(arg0, u8 *, 0xD13) = var_r2;
    if (func_ov123_02068294() != 1) {
        M2C_FIELD(arg0, s8 *, 0xD0E) = var_r4;
        var_r4                       = 7;
    }
    return var_r4;
}

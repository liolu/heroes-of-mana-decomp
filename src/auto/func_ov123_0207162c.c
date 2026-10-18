/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_020733a8();                          /* extern */

s32 func_ov123_0207162c(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    s8 temp_r0;

    if (func_ov123_020733a8() != 0) {
        return -0x1C;
    }
    var_r1 = 0;
    if (arg0 != NULL) {
        var_r1 = (M2C_FIELD(arg0, s16 *, 0x70) & 1) != 0;
    }
    if (var_r1 == 0) {
        return -0x27;
    }
    if (M2C_FIELD(arg0, s16 *, 0x70) & 2) {
        return -0x1C;
    }
    temp_r0  = M2C_FIELD(arg0, s8 *, 0x73);
    var_r1_2 = 1;
    if ((temp_r0 != 0) && (temp_r0 != 4)) {
        var_r1_2 = 0;
    }
    if (var_r1_2 == 0) {
        return -0x1C;
    }
    if (M2C_FIELD(arg0, s8 *, 0x72) == 1) {
        return 0;
    }
    return -6;
}

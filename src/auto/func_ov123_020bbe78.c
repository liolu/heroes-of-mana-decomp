#include "m2c.h"

void *func_ov123_020c35d4();                        /* extern */

s32 func_ov123_020bbe78(u32 arg0) {
    s32 var_r1;
    void *temp_r0;

    temp_r0 = func_ov123_020c35d4();
    var_r1  = 1;
    switch (arg0) {
        default:
            break;
        case 7:
            if (M2C_FIELD(temp_r0, u8 *, 0xF5) == 0) {
                var_r1 = 0;
            }
            break;
        case 0:
        case 1:
            if ((u32) (u8) (M2C_FIELD(temp_r0, u8 *, 0xE7) + 0xFF) <= 1U) {
                var_r1 = 0;
            }
            break;
        case 4:
        case 5:
        case 6:
            if (M2C_FIELD(temp_r0, u8 *, 0xF5) != 0) {
                var_r1 = 0;
            }
            break;
        case 9:
        case 10:
            if (M2C_FIELD(temp_r0, u8 *, 0xF6) != 0) {
                var_r1 = 0;
            }
            break;
    }
    return var_r1;
}

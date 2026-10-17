#include "m2c.h"

u32 func_ov123_020cca80();                          /* extern */

s32 func_ov123_020d2afc(void) {
    u32 temp_r0;

    temp_r0 = func_ov123_020cca80();
    switch (temp_r0) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            return 0;
    }
}

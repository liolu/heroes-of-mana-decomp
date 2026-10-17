#include "m2c.h"

u32 func_ov003_0209fb2c();                          /* extern */

s32 func_ov031_020d05c0(void) {
    u32 temp_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            return 8;
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 3;
        default:
            return 8;
    }
}

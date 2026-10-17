#include "m2c.h"

u32 func_ov003_0209fb2c();                          /* extern */

s32 func_ov022_020d0750(void) {
    u32 temp_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            return 0xF0;
        case 1:
            return 0x50;
        case 2:
            return 0x3C;
        case 3:
            return 0;
        default:
            return 0xF0;
    }
}

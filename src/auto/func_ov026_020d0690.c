#include "m2c.h"

u32 func_ov003_0209fb2c();                          /* extern */

s32 func_ov026_020d0690(void) {
    u32 temp_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            return 0xB4;
        case 1:
            return 0x3C;
        case 2:
            return 0x14;
        case 3:
            return 0;
        default:
            return 0xB4;
    }
}

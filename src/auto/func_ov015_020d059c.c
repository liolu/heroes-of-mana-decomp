#include "m2c.h"

u32 func_ov003_0209fb2c();                          /* extern */

s32 func_ov015_020d059c(void) {
    u32 temp_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            return 0x1A4;
        case 1:
            return 0xD2;
        case 2:
            return 0x64;
        case 3:
            return 0;
        default:
            return 0x1A4;
    }
}

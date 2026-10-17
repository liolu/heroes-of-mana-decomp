#include "m2c.h"

u32 func_ov003_0209fb2c();                          /* extern */

s32 func_ov018_020d0b24(void) {
    u32 temp_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            return 0x64;
        case 1:
            return 0x32;
        case 2:
            return 0x32;
        case 3:
            return 0x32;
        default:
            return 0x64;
    }
}

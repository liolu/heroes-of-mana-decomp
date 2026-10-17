#include "m2c.h"

u32 func_ov003_0209fb2c();                          /* extern */

s32 func_ov024_020d077c(void) {
    u32 temp_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            return 0x1E;
        case 1:
            return 0x14;
        case 2:
            return 0xA;
        case 3:
            return 5;
        default:
            return 0x1E;
    }
}

#include "m2c.h"

u32 func_ov003_0209fb2c();                          /* extern */

s32 func_ov014_020d0794(void) {
    u32 temp_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            return 0x258;
        case 1:
            return 0xA0;
        case 2:
            return 0x3C;
        case 3:
            return 0;
        default:
            return 0x258;
    }
}

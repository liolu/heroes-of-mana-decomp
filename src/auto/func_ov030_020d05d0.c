#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov030_020d05d0(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0xA;
        case 1:
            return 8;
        case 2:
            return 6;
        case 3:
            return 5;
        default:
            return 0xA;
    }
}

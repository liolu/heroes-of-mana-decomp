#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov030_020d061c(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0x4E2;
        case 1:
            return 0x834;
        case 2:
            return 0x50;
        case 3:
            return 0x5A;
        default:
            return 0x4E2;
    }
}

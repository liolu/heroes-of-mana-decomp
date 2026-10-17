#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov013_020d04c8(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0;
        case 1:
            return 0;
        case 2:
            return 0;
        case 3:
            return 0;
        default:
            return 0;
    }
}

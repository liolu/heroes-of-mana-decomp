#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov017_020d0750(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0x5A;
        case 1:
            return 0x3C;
        case 2:
            return 0x28;
        case 3:
            return 0x1E;
        default:
            return 0x5A;
    }
}

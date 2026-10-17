#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov008_020d05e4(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0xB4;
        case 1:
            return 0x1E;
        case 2:
            return 0xA;
        case 3:
            return 0;
        default:
            return 0xB4;
    }
}

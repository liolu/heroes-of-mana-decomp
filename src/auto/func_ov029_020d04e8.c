#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov029_020d04e8(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0xF;
        case 1:
            return 0xA;
        case 2:
            return 8;
        case 3:
            return 6;
        default:
            return 0xF;
    }
}

#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov018_020d0ad8(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
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

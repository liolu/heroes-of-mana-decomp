#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov016_020d06b4(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0x258;
        case 1:
            return 0x4B0;
        case 2:
            return 0x960;
        case 3:
            return 0x12C0;
        default:
            return 0x258;
    }
}

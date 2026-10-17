#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov015_020d05e8(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0x78;
        case 1:
            return 0x3C;
        case 2:
            return 0x1E;
        case 3:
            return 0;
        default:
            return 0x78;
    }
}

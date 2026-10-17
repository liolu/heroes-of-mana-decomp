#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov007_020d0544(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0x1E;
        case 1:
            return 5;
        case 2:
            return 3;
        case 3:
            return 0;
        default:
            return 0x1E;
    }
}

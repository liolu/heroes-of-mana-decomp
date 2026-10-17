#include "m2c.h"

u32 GetGameLevelMode();                          /* extern */

s32 func_ov020_020d06dc(void) {
    u32 temp_r0;

    temp_r0 = GetGameLevelMode();
    switch (temp_r0) {
        case 0:
            return 0x14;
        case 1:
            return 0x20;
        case 2:
            return 0x2A;
        case 3:
            return 0x33;
        default:
            return 0x14;
    }
}

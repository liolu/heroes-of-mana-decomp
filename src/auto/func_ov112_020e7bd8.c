#include "m2c.h"

extern M2C_UNK data_ov112_020ec588;

s32 func_ov112_020e7bd8(s32 arg0, s32 arg1) {
    u32 temp_r2;

    temp_r2 = (u32) (M2C_FIELD(&data_ov112_020ec588, s32 *, 0x488) << 0x15) >> 0x18;
    switch (temp_r2) {                              /* irregular */
        case 2:
        case 4:
        case 8:
        /* fallthrough */
        case 32:
        case 16:
            if (arg0 == arg1) {
                return 1;
            }
        default:
            return 0;
    }
}

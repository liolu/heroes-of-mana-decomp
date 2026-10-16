#include "m2c.h"

extern M2C_UNK data_0203673c;

s32 func_02002954(s32 param_1) {
    u8 *p     = (u8 *) (*(u32 *) (*(u32 *) &data_0203673c + 0x28)) + param_1 * 0x2d0;
    s32 count = 0;
    s32 i;

    for (i = 0; i < 8; i++) {
        if (p[i + 8] != 8) {
            count++;
        }
    }
    return count;
}

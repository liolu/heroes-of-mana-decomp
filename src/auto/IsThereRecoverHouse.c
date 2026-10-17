/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_0203673c;
extern M2C_UNK data_ov003_020a9054;

s32 IsThereRecoverHouse(s32 arg0) {
    M2C_UNK var_r0;

    if (((u32) (M2C_FIELD(((arg0 * 0x2D0) + M2C_FIELD(data_0203673c, s32 *, 0x28)), s32 *, 0x23C) << 0x1C) >> 0x1C) == 2) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}

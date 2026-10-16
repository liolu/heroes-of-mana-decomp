#include "m2c.h"

extern void *data_0203673c;

s32 func_ov120_020ea5fc(s32 arg0) {
    s32 temp_r2;
    s32 var_r0;

    temp_r2 = arg0 - 0x32;
    var_r0  = 1;
    if (!(M2C_FIELD((M2C_FIELD(data_0203673c, s32 *, 0x2C) + ((temp_r2 >> 5) * 4)), s32 *, 0x1090) &
          (1 << (temp_r2 & 0x1F)))) {
        var_r0 = 0;
    }
    return var_r0;
}

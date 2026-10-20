#include "m2c.h"

extern M2C_UNK data_ov112_020ec588;

s32 func_ov112_020e7c68(s32 arg0, s32 arg1) {
    u32 var;

    var = ((u32) M2C_FIELD(&data_ov112_020ec588, s32 *, 0x488) << 4) >> 0x1E;
    if ((var != 1) && (var != 2)) {
        goto out;
    }
    if (arg0 == arg1) {
        return 1;
    }
out:
    return 0;
}

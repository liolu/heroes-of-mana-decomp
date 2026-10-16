#include "m2c.h"

extern M2C_UNK data_ov112_020ec588;

s32 func_ov112_020e9b70(s32 arg0) {
    if (M2C_FIELD(&data_ov112_020ec588, u8 *, 0x484) == arg0) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

s32 func_ov112_020e6274();                          /* extern */
extern M2C_UNK data_ov112_020eca1c;

s32 func_ov112_020e7c34(s32 arg0) {
    if (func_ov112_020e6274() == 1) {
        return 1;
    }
    if (M2C_FIELD(&data_ov112_020eca1c, u8 *, 0xD57) == arg0) {
        return 1;
    }
    return 0;
}

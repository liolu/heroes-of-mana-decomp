#include "m2c.h"

extern M2C_UNK data_ov111_020ec674;

s32 func_ov111_020e2c00(s32 arg0) {
    if (arg0 == ((u32) (M2C_FIELD(&data_ov111_020ec674, s32 *, 0x410) << 0xD) >> 0x18)) {
        return 1;
    }
    return 0;
}

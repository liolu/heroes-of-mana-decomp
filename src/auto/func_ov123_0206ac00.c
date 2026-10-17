#include "m2c.h"

extern M2C_UNK data_ov123_020d4ed0;

s32 func_ov123_0206ac00(void *arg0) {
    return *(s32 *) ((u8 *) &data_ov123_020d4ed0 + (M2C_FIELD(arg0, u8 *, 1) * 0x10) + (M2C_FIELD(arg0, u8 *, 0) * 4));
}

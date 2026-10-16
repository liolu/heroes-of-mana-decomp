#include "m2c.h"

extern M2C_UNK data_ov123_020e47a4;

void func_ov123_020cdb08(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) != 0) {
        M2C_FIELD((M2C_FIELD(&data_ov123_020e47a4, s32 *, 8) + (arg0 * 4)), s32 *, 0xD24) = arg1;
    }
}

#include "m2c.h"

extern s32 data_ov123_020e478c;

void func_ov123_020cb588(s32 arg0, s8 arg1) {
    M2C_FIELD((data_ov123_020e478c + (arg0 << 6)), s8 *, 0x38) = arg1;
}

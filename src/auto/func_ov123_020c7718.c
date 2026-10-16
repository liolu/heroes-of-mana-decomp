#include "m2c.h"

extern void *data_ov123_020e4708;

void func_ov123_020c7718(s32 arg0) {
    if ((u32) (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) - 9) > 1U) {
        M2C_FIELD(data_ov123_020e4708, s32 *, 0x54) = arg0;
    }
}

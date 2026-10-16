#include "m2c.h"

extern void *data_ov123_020e4708;

void func_ov123_020c77c0(void *arg0) {
    data_ov123_020e4708                           = arg0;
    M2C_FIELD(arg0, s32 *, 0x40)                  = 0;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x13A8) = 0;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x13AC) = 0;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x13B0) = 0;
}

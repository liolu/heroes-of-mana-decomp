#include "m2c.h"

extern void *data_ov123_020e1748;

void func_ov123_0209a880(s32 arg0) {
    M2C_FIELD(data_ov123_020e1748, s32 *, 0x28) = (s32) M2C_FIELD(data_ov123_020e1748, s32 *, 0x24);
    M2C_FIELD(data_ov123_020e1748, s32 *, 0x24) = arg0;
}

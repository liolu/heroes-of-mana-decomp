#include "m2c.h"

extern void *data_ov123_020e47a0;

void func_ov123_020ccc44(s32 arg0, s32 arg1) {
    if (data_ov123_020e47a0 == NULL) {
        return;
    }
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x19F0) = arg0;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x19F4) = arg1;
}

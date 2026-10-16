#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov123_020e18d4;

void func_ov123_0209bea8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    data_ov123_020e18d4 = arg0;
    MI_CpuFill8(arg0, 0, 0x260);
    M2C_FIELD(data_ov123_020e18d4, s32 *, 0)    = arg2;
    M2C_FIELD(data_ov123_020e18d4, s32 *, 4)    = 0;
    M2C_FIELD(data_ov123_020e18d4, s32 *, 8)    = arg3;
    M2C_FIELD(data_ov123_020e18d4, s32 *, 0xC)  = arg4;
    M2C_FIELD(data_ov123_020e18d4, s32 *, 0x10) = arg5;
    M2C_FIELD(data_ov123_020e18d4, s32 *, 0x14) = arg6;
    M2C_FIELD(data_ov123_020e18d4, s32 *, 0x18) = arg7;
    M2C_FIELD(data_ov123_020e18d4, s32 *, 0x1C) = arg1;
}

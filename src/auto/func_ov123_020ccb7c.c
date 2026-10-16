#include "m2c.h"

M2C_UNK MIi_CpuClear32(M2C_UNK, void *, s32);       /* extern */
M2C_UNK OS_InitMutex(void *);                       /* extern */
extern s32 data_ov123_020de764;
extern M2C_UNK data_ov123_020de768;
extern void *data_ov123_020e47a0;
extern M2C_UNK func_ov123_020cd738;

void func_ov123_020ccb7c(void *arg0, s8 arg1, s8 arg2) {
    data_ov123_020e47a0 = arg0;
    MIi_CpuClear32(0, arg0, 0x1FB0);
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x2C)       = -0x38;
    M2C_FIELD(data_ov123_020e47a0, s8 *, 0x9E0)       = arg2;
    M2C_FIELD(data_ov123_020e47a0, s8 *, 0x9E1)       = arg1;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x830)      = (s32) data_ov123_020de764;
    M2C_FIELD(data_ov123_020e47a0, M2C_UNK **, 0x844) = &data_ov123_020de768;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x848)      = 1;
    M2C_FIELD(data_ov123_020e47a0, M2C_UNK **, 0x840) = &func_ov123_020cd738;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x984)      = 2;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x8C4)      = 2;
    OS_InitMutex(data_ov123_020e47a0 + 4);
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) | 1);
}

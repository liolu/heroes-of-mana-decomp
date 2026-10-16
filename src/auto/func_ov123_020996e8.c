#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, s32, M2C_UNK);             /* extern */
extern M2C_UNK (*data_ov123_020e1724)(M2C_UNK, s32, M2C_UNK);
extern s32 (*data_ov123_020e1728)(M2C_UNK, M2C_UNK, s32);

s32 func_ov123_020996e8(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    s32 temp_r0;

    temp_r0 = data_ov123_020e1728(arg0, arg3, arg4);
    if (temp_r0 == 0) {
        return 0;
    }
    if (arg1 != 0) {
        MI_CpuCopy8(arg1, temp_r0, arg3);
        data_ov123_020e1724(arg0, arg1, arg2);
    }
    return temp_r0;
}

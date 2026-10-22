#include "m2c.h"

M2C_UNK MI_CpuFill8(s32 *, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_ov123_020dc270;

void func_ov123_0209686c(void *arg0, s32 *arg1) {
    s32 temp_r1;
    M2C_UNK (*temp_r3)(M2C_UNK *, s32, M2C_UNK);

    temp_r1 = *arg1;
    temp_r3 = M2C_FIELD((u8 *) arg0 + 0x1000, M2C_UNK(**)(M2C_UNK *, s32, M2C_UNK), 0x14);
    if (temp_r1 != 0) {
        temp_r3(&data_ov123_020dc270, temp_r1, 0);
    }
    MI_CpuFill8(arg1, 0, 0x10);
}
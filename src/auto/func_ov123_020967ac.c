/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, s32, s32);                 /* extern */
extern M2C_UNK data_ov123_020dc260;
extern M2C_UNK data_ov123_020dc270;

s32 func_ov123_020967ac(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK (*temp_r7)(M2C_UNK *, s32, M2C_UNK);
    s32 temp_r0;
    s32 (*fa)(M2C_UNK *, s32);

    temp_r7 = M2C_FIELD(arg0, M2C_UNK(**)(M2C_UNK *, s32, M2C_UNK), 0x1014);
    fa      = M2C_FIELD(arg0, s32(**)(M2C_UNK *, s32), 0x1010);
    if (arg2 <= 0) {
        return 0;
    }
    temp_r0 = fa(&data_ov123_020dc260, M2C_FIELD(arg1, s32 *, 0xC) + arg2);
    if (temp_r0 == 0) {
        return 0;
    }
    MI_CpuCopy8(M2C_FIELD(arg1, s32 *, 0), temp_r0, M2C_FIELD(arg1, s32 *, 0xC));
    temp_r7(&data_ov123_020dc270, M2C_FIELD(arg1, s32 *, 0), 0);
    if (temp_r0 == 0) {
        return 0;
    }
    M2C_FIELD(arg1, s32 *, 4)   = (s32) (M2C_FIELD(arg1, s32 *, 4) + (temp_r0 - M2C_FIELD(arg1, s32 *, 0)));
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(arg1, s32 *, 0xC) + arg2);
    M2C_FIELD(arg1, s32 *, 0)   = temp_r0;
    M2C_FIELD(arg1, s32 *, 8)   = (s32) (temp_r0 + M2C_FIELD(arg1, s32 *, 0xC));
    return 1;
}

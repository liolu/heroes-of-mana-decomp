#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02021338(s32, s32, s32);               /* extern */
extern M2C_UNK data_ov123_020db444;
extern M2C_UNK data_ov123_020db45c;
extern M2C_UNK data_ov123_020db468;

void func_ov123_020873f4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = arg1;
    if (var_r5 == -1) {
        var_r5 = M2C_FIELD(arg0, s32 *, 8) - arg2;
    }
    if (var_r5 > (s32) M2C_FIELD(arg0, s32 *, 8)) {
        func_02020d04(&data_ov123_020db444, &data_ov123_020db45c, 0, 0x4F);
    }
    if (arg2 > (s32) (M2C_FIELD(arg0, s32 *, 8) - var_r5)) {
        func_02020d04(&data_ov123_020db468, &data_ov123_020db45c, 0, 0x50);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0) + var_r5;
    func_02021338(temp_r0, temp_r0 + arg2, (M2C_FIELD(arg0, s32 *, 8) - var_r5) - arg2);
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - arg2);
}

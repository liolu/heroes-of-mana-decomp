#include "m2c.h"

M2C_UNK func_ov123_02099524(M2C_UNK, s32);          /* extern */
s32 func_ov123_0209a9fc();                          /* extern */
M2C_UNK func_ov123_020a4540(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020a4590(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020a4690(s32, M2C_UNK, M2C_UNK); /* extern */
u32 func_ov123_020a492c();                          /* extern */
u32 func_ov123_020a4cd8(M2C_UNK);                   /* extern */
extern s32 data_ov123_020e2048;

void func_ov123_020a4810(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_ip;
    s32 temp_r4;
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r4 = func_ov123_0209a9fc();
    temp_r0 = func_ov123_020a492c();
    switch (temp_r0) {
        case 0:
            temp_r0_2 = func_ov123_020a4cd8(arg1);
            if (temp_r0_2 < 2U) {
                return;
            }
            if (temp_r0_2 > 4U) {
                return;
            }
            func_ov123_020a4690(temp_r4, arg1, arg2);
            return;
        case 1:
            func_ov123_020a4690(temp_r4, arg1, arg2);
            return;
        case 2:
            func_ov123_020a4590(temp_r4, arg1, arg2);
            return;
        case 3:
            func_ov123_020a4540(temp_r4, arg1, arg2);
            return;
        case 4:
            temp_ip                                                 = temp_r4 * 0x30;
            M2C_FIELD((data_ov123_020e2048 + temp_ip), u8 *, 0x1D)  = 1;
            M2C_FIELD((data_ov123_020e2048 + temp_ip), s32 *, 0x10) = 0;
            M2C_FIELD((data_ov123_020e2048 + temp_ip), s32 *, 0x18) = 0;
            return;
        default:
            func_ov123_02099524(6, 0xFFFE82B6);
            return;
    }
}

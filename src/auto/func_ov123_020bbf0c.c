#include "m2c.h"

M2C_UNK func_ov123_020bbd54(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020bbe78(M2C_UNK);                   /* extern */
void *func_ov123_020c35d4();                        /* extern */
extern void *data_ov123_020e4674;

void func_ov123_020bbf0c(u32 arg0, M2C_UNK arg1) {
    M2C_UNK var_r0;
    M2C_UNK var_r0_2;
    M2C_UNK var_r1;
    M2C_UNK var_r1_2;
    M2C_UNK var_r4;
    M2C_UNK var_r5;
    void *temp_r0;

    temp_r0 = func_ov123_020c35d4();
    switch (arg0) {
        case 0:
        case 1:
            var_r5 = 0;
            var_r4 = 0;
            if (func_ov123_020bbe78(0) == 0) {
                var_r4 = 2;
            }
            break;
        case 2:
            var_r4 = var_r1 = 0;
            if (M2C_FIELD(temp_r0, u8 *, 0xF5) != 0) {
                var_r5 = 1;
                var_r0 = 4;
            } else {
                var_r5 = 2;
                var_r0 = 3;
            }
            if (M2C_FIELD(data_ov123_020e4674, u8 *, 4) != 0) {
                var_r4 = 1;
            }
            if (M2C_FIELD(data_ov123_020e4674, u8 *, 5) != 0) {
                var_r1 = 1;
            }
            func_ov123_020bbd54(var_r0, var_r1, arg1);
            break;
        case 3:
        case 4:
        case 5:
            var_r5 = 0;
            if (M2C_FIELD(temp_r0, u8 *, 0xF5) != 0) {
                var_r4 = 2;
            } else {
                var_r4 = 0;
            }
            break;
        case 6:
            var_r1_2 = 0;
            var_r4   = 0;
            if (M2C_FIELD(temp_r0, u8 *, 0xF6) != 0) {
                var_r5   = 1;
                var_r0_2 = 4;
            } else {
                if (M2C_FIELD(temp_r0, u8 *, 0xF5) == 0) {
                    var_r4 = 2;
                }
                var_r5   = 2;
                var_r0_2 = 3;
            }
            if (M2C_FIELD(data_ov123_020e4674, u8 *, 6) != 0) {
                var_r4 = 1;
            }
            if (M2C_FIELD(data_ov123_020e4674, u8 *, 7) != 0) {
                var_r1_2 = 1;
            }
            func_ov123_020bbd54(var_r0_2, var_r1_2, arg1);
            break;
        case 7:
        case 8:
            var_r5 = 0;
            if (M2C_FIELD(temp_r0, u8 *, 0xF6) != 0) {
                var_r4 = 2;
            } else {
                var_r4 = 0;
            }
            break;
        default:
            var_r5 = 0;
            var_r4 = 2;
            break;
    }
    func_ov123_020bbd54(var_r5, var_r4, arg1);
}

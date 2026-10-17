#include "m2c.h"

M2C_UNK func_ov123_020b742c();                      /* extern */
M2C_UNK func_ov123_020b76b8();                      /* extern */
M2C_UNK func_ov123_020b7bc4();                      /* extern */
M2C_UNK func_ov123_020c23b4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u8 data_ov123_020e464c;
extern u16 data_ov123_020e4650;
extern void *data_ov123_020e4654;
extern M2C_UNK func_ov123_020b7824;

void func_ov123_020b7554(s32 arg0) {
    s32 temp_r2;
    s32 var_r4;

    var_r4 = 1;
    switch (data_ov123_020e464c) {
        case 0:
            if (arg0 == 1) {
                if (data_ov123_020e4650 == 0) {
                    data_ov123_020e464c = 4;
                    goto block_28;
                }
                func_ov123_020c36bc(0x13);
                M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) = func_ov123_020cb6ac(0, &func_ov123_020b7824, 0, 0x78);
                return;
            }
            if ((u32) M2C_FIELD(data_ov123_020e4654, u8 *, 0x51) > 1U) {
                data_ov123_020e464c += 1;
            } else {
                var_r4 = 0;
            }
            goto block_28;
        case 1:
        case 2:
            if (arg0 == 1) {
                data_ov123_020e464c -= 1;
            } else {
                temp_r2 = data_ov123_020e464c + 1;
                if ((s32) M2C_FIELD(data_ov123_020e4654, u8 *, 0x51) > temp_r2) {
                    data_ov123_020e464c = (u8) temp_r2;
                } else {
                    var_r4 = 0;
                }
            }
            goto block_28;
        case 3:
            if (arg0 == 1) {
                data_ov123_020e464c -= 1;
                goto block_28;
            }
            func_ov123_020b742c();
            return;
        case 4:
            if (arg0 == 1) {
                var_r4 = 0;
            } else {
                data_ov123_020e4650 = 0;
                data_ov123_020e464c = 0;
                func_ov123_020b7bc4();
                func_ov123_020c23b4(0);
            }
            goto block_28;
        default:
        block_28:
            if (var_r4 == 0) {
                if (M2C_FIELD(data_ov123_020e4654, u8 *, 0x59) != 0) {
                    return;
                }
                func_ov123_020c36bc(9);
                M2C_FIELD(data_ov123_020e4654, u8 *, 0x59) = 1U;
                return;
            }
            func_ov123_020c36bc(8);
            func_ov123_020b76b8();
            return;
    }
}

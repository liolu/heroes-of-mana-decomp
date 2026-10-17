#include "m2c.h"

u32 func_ov123_02099cac();                          /* extern */
M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020cdea4();                      /* extern */
s32 func_ov123_020cdf98();                          /* extern */
extern M2C_UNK data_ov123_020e47a4;

void func_ov123_020cdf24(void) {
    u32 temp_r0;

    M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), u32 *, 4) = func_ov123_02099cac();
    temp_r0 = M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), u32 *, 4);
    switch (temp_r0) {
        case 3:
            if (M2C_FIELD(M2C_FIELD(&data_ov123_020e47a4, void **, 8), s32 *, 8) != 0) {
                if (func_ov123_020cdf98() != 0) {
                    return;
                }
                func_ov123_020cdea4();
                return;
            }
            func_ov123_020cc97c(6, -0x14);
            return;
        case 0:
        case 1:
        case 2:
        case 4:
        case 5:
            return;
        default:
            return;
    }
}

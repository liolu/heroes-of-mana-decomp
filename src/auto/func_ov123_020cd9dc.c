#include "m2c.h"

s32 func_ov123_020ccc9c();                          /* extern */
M2C_UNK func_ov123_020cdd84();                      /* extern */
M2C_UNK func_ov123_020cdea4();                      /* extern */
s32 func_ov123_020cdf98();                          /* extern */
extern M2C_UNK data_ov123_020e47a4;

s32 func_ov123_020cd9dc(void) {
    s32 var_r0;
    u32 temp_r0;

    if (M2C_FIELD(&data_ov123_020e47a4, u32 **, 8) != NULL) {
        temp_r0 = *M2C_FIELD(&data_ov123_020e47a4, u32 **, 8);
        switch (temp_r0) {
            case 1:
            case 2:
            case 3:
            case 4:
                break;
            default:
                break;
            case 0:
                if (func_ov123_020cdf98() != 0) {
                    func_ov123_020cdd84();
                } else {
                    func_ov123_020cdea4();
                }
                break;
            case 5:
                if (func_ov123_020ccc9c() != 0) {
                    *M2C_FIELD(&data_ov123_020e47a4, u32 **, 8) = 0;
                }
                break;
        }
        if (*M2C_FIELD(&data_ov123_020e47a4, u32 **, 8) == 4) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}

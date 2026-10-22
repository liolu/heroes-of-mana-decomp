#include "m2c.h"

u32 func_ov123_0209958c();                          /* extern */
extern M2C_UNK data_ov123_020e4798;

u32 func_ov123_020cc85c(s32 *arg0, s32 *arg1) {
    u32 temp_r0;

    temp_r0 = func_ov123_0209958c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(&data_ov123_020e4798, s32 *, 4);
    }
    if (arg1 != NULL) {
        switch (M2C_FIELD(&data_ov123_020e4798, u32 *, 0)) {
            case 2:
            case 3:
            case 4:
            case 5:
            case 8:
                *arg1 = 6;
                break;
            case 6:
                *arg1 = 3;
                break;
            case 10:
            case 11:
            case 12:
            case 13:
                *arg1 = 1;
                break;
            case 1:
            case 9:
                *arg1 = 7;
                break;
            default:
            case 0:
            case 7:
                *arg1 = 0;
                break;
        }
    }
    return M2C_FIELD(&data_ov123_020e4798, u32 *, 0);
}

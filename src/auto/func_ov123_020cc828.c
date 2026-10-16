#include "m2c.h"

s32 func_ov123_0209967c();                          /* extern */
extern M2C_UNK data_ov123_020e4798;

s32 func_ov123_020cc828(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_ov123_0209967c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(&data_ov123_020e4798, s32 *, 4);
    }
    return M2C_FIELD(&data_ov123_020e4798, s32 *, 0);
}

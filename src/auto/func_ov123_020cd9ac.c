#include "m2c.h"

extern M2C_UNK data_ov123_020e47a4;

s32 func_ov123_020cd9ac(void) {
    s32 var_r0;

    if (M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) != NULL) {
        if (*M2C_FIELD(&data_ov123_020e47a4, s32 **, 8) == 4) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}

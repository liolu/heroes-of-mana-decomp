#include "m2c.h"

s32 func_02024c28();                                /* extern */
M2C_UNK func_02024c44(M2C_UNK, s32);                /* extern */
s32 func_ov123_020961e4();                          /* extern */

s32 func_ov123_02096150(void *arg0, void *arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_ov123_020961e4();
    if (temp_r0 == 0) {
        return 0;
    }
    if (func_02024c28() >= arg3) {
        return 0;
    }
    func_02024c44(arg2, temp_r0);
    return 1;
}

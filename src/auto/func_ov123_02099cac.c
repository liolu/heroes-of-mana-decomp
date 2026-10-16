#include "m2c.h"

s32 func_ov123_02098d84();                          /* extern */
M2C_UNK func_ov123_020990e0();                      /* extern */

s32 func_ov123_02099cac(void) {
    s32 temp_r0;

    temp_r0 = func_ov123_02098d84();
    if ((u32) (temp_r0 - 3) <= 2U) {
        func_ov123_020990e0();
    }
    return temp_r0;
}

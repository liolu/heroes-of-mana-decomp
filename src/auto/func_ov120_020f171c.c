#include "m2c.h"

s32 func_ov120_020f16dc(M2C_UNK);                   /* extern */

u16 func_ov120_020f171c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_ov120_020f16dc(arg1);
    if (temp_r0 == 0) {
        return 0U;
    }
    return M2C_FIELD((temp_r0 + (arg0 * 2)), u16 *, 0x14);
}

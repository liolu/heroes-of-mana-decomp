/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207c16c(void **, s32);              /* extern */
s32 func_ov123_02081f18(void **, M2C_UNK, M2C_UNK, void **, s32, s32, s32); /* extern */
s32 func_ov123_02085c40(void **, void *);           /* extern */

s32 func_ov123_02085ae8(void **arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *spC;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    void *temp_r4;

    temp_r4                          = *arg0;
    M2C_FIELD(temp_r4, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x210) + 1);
    temp_r0_3                        = func_ov123_02081f18(arg0, 3, arg1, &spC, arg2, arg3, arg4);
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_2 = func_ov123_02085c40(arg0, spC);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    if (M2C_FIELD(spC, s32 *, 8) != 0) {
        temp_r0 = func_ov123_0207c16c(arg0, M2C_FIELD(spC, s32 *, 0x18));
        if (temp_r0 != 0) {
            return temp_r0;
        }
    }
    return 0;
}

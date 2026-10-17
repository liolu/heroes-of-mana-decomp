/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207adbc(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_02090624(void *);                /* extern */
s32 func_ov123_02090744(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_02090e14(void *);                /* extern */

s32 func_ov123_020909b8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r6;

    var_r6 = 1;
loop_1:
    var_r6 -= 1;
    temp_r0_2 = func_ov123_0207adbc(M2C_FIELD(arg0, s32 *, 0x4B0), arg1, arg2, 0);
    if ((temp_r0_2 <= 0) && (var_r6 >= 0)) {
        func_ov123_02090624(arg0);
        temp_r0 = func_ov123_02090744(arg0, 0, 0, 2, 0);
        if (temp_r0 != 0) {
            func_ov123_02090e14(arg0);
            return temp_r0;
        }
        if (var_r6 < 0) {
            goto block_6;
        }
        goto loop_1;
    }
block_6:
    if (temp_r0_2 <= 0) {
        return 3;
    }
    return 0;
}

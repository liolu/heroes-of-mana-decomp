/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207ccec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_02082478(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_02082604(M2C_UNK, s32);              /* extern */
s32 func_ov123_0208279c(M2C_UNK, s32);              /* extern */
s32 func_ov123_02082800(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020828ac();                          /* extern */
s32 func_ov123_02083774(M2C_UNK, M2C_UNK, void **); /* extern */

s32 func_ov123_0207cbf0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    void *sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;
    s32 var_r8;
    void *temp_r0_3;

    var_r8 = func_ov123_020828ac();
    if (var_r8 == 0) {
        if ((func_ov123_02083774(arg0, arg1, &sp0) == 0) || (temp_r0_3 = M2C_FIELD(sp0, void **, 8), (temp_r0_3 == NULL)) ||
            (M2C_FIELD(temp_r0_3, s32 *, 0x14) == 0)) {
            return func_ov123_0207ccec(arg0, arg1, arg2, arg3);
        }
        var_r8 = func_ov123_02082800(arg0, arg1, 1);
        if (var_r8 == 0) {
            return 1;
        }
        if (M2C_FIELD(sp0, s32 *, 0x18) == 0) {
            temp_r0_2 = func_ov123_0208279c(arg0, var_r8);
            if (temp_r0_2 != 0) {
                return temp_r0_2;
            }
            goto block_12;
        }
        temp_r0 = func_ov123_02082604(arg0, var_r8);
        if (temp_r0 != 0) {
            return temp_r0;
        }
        goto block_12;
    }
block_12:
    var_r0 = func_ov123_02082478(arg0, var_r8, arg2, arg3);
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}

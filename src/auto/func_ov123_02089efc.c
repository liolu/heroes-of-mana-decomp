#include "m2c.h"

s32 func_ov123_02087d14(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0208805c();                      /* extern */
s32 func_ov123_020889ec(void *);                    /* extern */
s32 func_ov123_0208a4c8();                          /* extern */

s32 func_ov123_02089efc(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (func_ov123_0208a4c8() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    func_ov123_0208805c(arg0);
    if (func_ov123_020889ec(arg0) == 0) {
        return 0;
    }
    if (func_ov123_02087d14(arg0, 2, arg1, arg2) != 0) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

s32 func_ov123_020889ec();                          /* extern */
s32 func_ov123_0208a4dc(void *, M2C_UNK, M2C_UNK);  /* extern */

s32 func_ov123_02089eb8(void *arg0) {
    M2C_UNK var_r2;

    if (func_ov123_020889ec() == 0) {
        return 0;
    }
    var_r2 = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) == 6) ? NULL : (void *) 1);
    if (func_ov123_0208a4dc(arg0, 2, var_r2) == 0) {
        return 0;
    }
    return 1;
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02087d14(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_0208a4c8();                          /* extern */

s32 func_ov123_02089f68(void *arg0) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (func_ov123_0208a4c8() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 5;
    if (func_ov123_02087d14(arg0, 0, 0, 0) != 0) {
        return 1;
    }
    return 0;
}

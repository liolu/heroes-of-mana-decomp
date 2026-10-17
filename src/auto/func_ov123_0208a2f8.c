/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207a204(s32);                       /* extern */
s32 func_ov123_02087850(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_ov123_02087c18(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_ov123_0208a2f8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if ((temp_r0 != 5) && (temp_r0 != 6)) {
        return 1;
    }
    if (func_ov123_0207a204(M2C_FIELD(arg0, s32 *, 0x9C)) != 0) {
        if (func_ov123_02087850(arg0, 0, arg1, arg2, 0) != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (func_ov123_02087c18(arg0, arg1, arg2, 0) != 0) {
        return 1;
    }
    return 0;
}

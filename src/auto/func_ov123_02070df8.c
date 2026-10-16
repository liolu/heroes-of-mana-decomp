/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200e358(M2C_UNK, void *, M2C_UNK);        /* extern */
M2C_UNK func_ov123_02070e64(void *);                /* extern */

s32 func_ov123_02070df8(M2C_UNK arg0, void *arg1) {
    M2C_UNK var_r2;
    s32 temp_r0;

    if ((arg1 == NULL) || (M2C_FIELD(arg1, s8 *, 0xD) & 1)) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    temp_r0 = func_0200e358(arg0, arg1, var_r2);
    if (temp_r0 == 0) {
        func_ov123_02070e64(arg1);
    }
    if (temp_r0 != 0) {
        return 0;
    }
    return -0x2A;
}

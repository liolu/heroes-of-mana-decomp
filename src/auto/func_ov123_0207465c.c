/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0206d164(void *);                    /* extern */
s32 func_ov123_020746c4(void *);                    /* extern */
M2C_UNK func_ov123_02077974(void *);                /* extern */
M2C_UNK func_ov123_02077fb4(void *);                /* extern */

s32 func_ov123_0207465c(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xC);
    if ((M2C_FIELD(arg0, u8 *, 8) != 4) && (func_ov123_0206d164(arg0) != 0)) {
        return 1;
    }
    M2C_FIELD(temp_r4, s8 *, 0x455) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x1D4) = 0;
    M2C_FIELD(temp_r4, s8 *, 0x454) = 0;
    func_ov123_02077fb4(temp_r4 + 0x2EC);
    func_ov123_02077974(temp_r4 + 0x3A4);
    return func_ov123_020746c4(arg0);
}

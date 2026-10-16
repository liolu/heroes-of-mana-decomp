/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_02070d2c(s32, s32);              /* extern */
s32 func_ov123_02070e98(M2C_UNK *, s32, M2C_UNK);   /* extern */
s32 func_ov123_02071284();                          /* extern */
extern M2C_UNK func_ov123_020712f8;

s32 func_ov123_02071370(void) {
    s32 temp_r0;

    temp_r0 = func_ov123_02071284();
    if (temp_r0 == 0) {
        return -0x31;
    }
    func_ov123_02070d2c(temp_r0, func_ov123_02070e98(&func_ov123_020712f8, temp_r0, 1));
    return temp_r0;
}

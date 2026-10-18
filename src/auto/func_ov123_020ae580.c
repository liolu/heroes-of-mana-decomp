/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK DC_FlushRange(s32, s32);                    /* extern */
s32 func_ov123_020ae5c8();                          /* extern */
M2C_UNK func_ov123_020c8840(s32);                   /* extern */
s32 func_ov123_020c887c(s32, s32 *, M2C_UNK);       /* extern */

void func_ov123_020ae580(s32 arg0, M2C_UNK (*arg1)(s32, M2C_UNK, s32)) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_ov123_020c887c(func_ov123_020ae5c8(), &sp0, 4);
    DC_FlushRange(temp_r0, sp0);
    arg1(temp_r0, 0, sp0);
    func_ov123_020c8840(temp_r0);
}

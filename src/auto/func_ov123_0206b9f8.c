/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0206ba5c(s32, s32);                  /* extern */
s32 func_ov123_0206bf38();                          /* extern */
M2C_UNK func_ov123_0206d2f8();                      /* extern */
M2C_UNK func_ov123_0206d318();                      /* extern */
M2C_UNK func_ov123_0206d34c(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0206d3bc();                      /* extern */

s32 func_ov123_0206b9f8(void) {
    s32 temp_r0;
    s32 var_r4;

    func_ov123_0206d318();
    func_ov123_0206d3bc();
    func_ov123_0206d34c(0x44, 0x43, -1);
    var_r4 = 0;
loop_1:
    temp_r0 = func_ov123_0206ba5c(func_ov123_0206bf38(), var_r4);
    if (temp_r0 != 1) {
        var_r4 += 1;
        if (var_r4 < 4) {
            goto loop_1;
        }
    }
    func_ov123_0206d2f8();
    if (temp_r0 == 1) {
        return 1;
    }
    return 0;
}

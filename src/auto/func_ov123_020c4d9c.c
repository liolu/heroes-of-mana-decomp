/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c8c80(M2C_UNK, s32, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_ov123_020c8ec0(M2C_UNK, s32, s32, s32); /* extern */
s32 func_ov123_020c8f78();                          /* extern */

void func_ov123_020c4d9c(M2C_UNK arg0, s32 arg1) {
    M2C_UNK sp0;
    s32 sp4;
    s32 temp_r0;
    s32 var_r2;
    s32 var_r7;

    temp_r0 = func_ov123_020c8f78();
    var_r7  = 0;
    if (temp_r0 <= 0) {
        return;
    }
    do {
        func_ov123_020c8c80(arg0, var_r7, &sp0, &sp4);
        if ((sp4 >= arg1) && (sp4 < 0xC0)) {
            var_r2 = 0;
        } else {
            var_r2 = 0x200;
        }
        func_ov123_020c8ec0(arg0, var_r7, var_r2, 0);
        var_r7 += 1;
    } while (var_r7 < temp_r0);
}

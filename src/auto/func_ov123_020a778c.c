/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a68e8(u8 *, M2C_UNK, s32);        /* extern */
extern u8 data_ov123_020e20b8;

s32 func_ov123_020a778c(s32 arg0, M2C_UNK arg1) {
    s32 var_r4;
    s32 var_r6;
    s32 var_r5;
    u8 *var_r3;

    var_r4 = 0;
    var_r5 = 0;
    var_r6 = 0;
    var_r3 = &data_ov123_020e20b8;
loop_1:
    if (*var_r3 != 0) {
        var_r5 = 1;
    } else {
        var_r3 += 1;
        var_r6 += 1;
        if (var_r6 < 6) {
            goto loop_1;
        }
    }
    if (var_r5 != 0) {
        if (func_ov123_020a68e8(&data_ov123_020e20b8, arg1, 6) != 0) {
            var_r4 = 1;
        }
    } else if (arg0 != 0x1000) {
        var_r4 = 2;
    }
    return var_r4;
}

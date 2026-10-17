/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02008fb4(M2C_UNK, s32);                    /* extern */
M2C_UNK func_ov123_020c3678(s32, s32);              /* extern */
M2C_UNK func_ov123_020c369c(s32);                   /* extern */
extern void *data_ov123_020e46c8;

void func_ov123_020c207c(s32 arg0) {
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;

    var_r4 = M2C_FIELD(data_ov123_020e46c8, u8 *, 0x1A) - arg0;
    if (var_r4 < 0) {
        var_r4 = 0 - var_r4;
    }
    if (var_r4 < 2) {
        var_r0 = 0;
    } else if (var_r4 >= 6) {
        var_r0 = 0x7F;
    } else {
        var_r0 = func_02008fb4(0x7F, 6 - var_r4);
    }
    func_ov123_020c369c(var_r0);
    if (var_r4 < 2) {
        var_r1 = -0x100;
    } else if (var_r4 >= 6) {
        var_r1 = 0x100;
    } else {
        var_r1 = func_02008fb4(0x200, 6 - var_r4) - 0x100;
    }
    func_ov123_020c3678(0xFFFF, var_r1);
}

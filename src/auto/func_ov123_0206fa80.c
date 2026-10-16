/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200e0a4(M2C_UNK);                     /* extern */
M2C_UNK func_ov123_0206fb0c(M2C_UNK);               /* extern */
s32 func_ov123_0206fc0c(M2C_UNK);                   /* extern */
extern s32 data_ov123_020df220;

s32 func_ov123_0206fa80(M2C_UNK arg0) {
    s32 temp_r0;
    u32 var_r8;
    u32 var_r7;

    var_r8 = 0;
loop_1:
    func_ov123_0206fb0c(arg0);
    var_r7 = 0;
loop_2:
    if (data_ov123_020df220 == 0) {
        return 0;
    }
    func_0200e0a4(0x64);
    temp_r0 = func_ov123_0206fc0c(arg0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    var_r7 += 1;
    if (var_r7 >= 0x14U) {
        var_r8 += 1;
        if (var_r8 >= 8U) {
            return 0;
        }
        goto loop_1;
    }
    goto loop_2;
}

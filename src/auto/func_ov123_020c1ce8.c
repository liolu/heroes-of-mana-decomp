/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(s32, s32, s32);               /* extern */
extern s32 data_ov123_020e46bc;

void func_ov123_020c1ce8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r6;
    s32 var_r5;
    s32 var_r8;

    var_r8 = arg0;
    var_r6 = data_ov123_020e46bc + 4 + (arg1 * 2);
    var_r5 = 0;
    if (arg3 <= 0) {
        return;
    }
    do {
        MIi_CpuCopy16(var_r8, var_r6, arg2 * 2);
        var_r5 += 1;
        var_r8 += 0x40;
        var_r6 += 0x40;
    } while (var_r5 < arg3);
}

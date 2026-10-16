/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02070228(s32);                       /* extern */
s32 func_ov123_0207023c(s32);                       /* extern */
extern s32 data_ov123_020df220;

s32 func_ov123_020701a0(s32 arg0) {
    s32 var_r0;
    s32 var_r2;
    s32 var_r5;
    s32 var_r4;

    var_r5 = 1;
    var_r4 = 1;
    var_r2 = 1;
    var_r0 = 1;
    if ((data_ov123_020df220 != 0) && (arg0 != data_ov123_020df220)) {
        var_r0 = 0;
    }
    if ((var_r0 == 0) && (arg0 != 0x7F000001)) {
        var_r2 = 0;
    }
    if ((var_r2 == 0) && (func_ov123_0207023c(arg0) == 0)) {
        var_r4 = 0;
    }
    if ((var_r4 == 0) && (func_ov123_02070228(arg0) == 0)) {
        var_r5 = 0;
    }
    return var_r5;
}

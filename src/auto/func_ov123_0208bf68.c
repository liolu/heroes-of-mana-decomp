#include "m2c.h"

M2C_UNK func_ov123_02079f78(s32, s32);              /* extern */
s32 func_ov123_0207a194(s32, s32);                  /* extern */
s32 func_ov123_0207a204(s32);                       /* extern */
extern s32 data_ov123_020e12f0;

void func_ov123_0208bf68(s32 arg0) {
    s32 var_r5;

    var_r5 = 0;
    if (func_ov123_0207a204(data_ov123_020e12f0) <= 0) {
        return;
    }
loop_3:
    if (arg0 == func_ov123_0207a194(data_ov123_020e12f0, var_r5)) {
        func_ov123_02079f78(data_ov123_020e12f0, var_r5);
        return;
    }
    var_r5 += 1;
    if (var_r5 >= func_ov123_0207a204(data_ov123_020e12f0)) {
        return;
    }
    goto loop_3;
}

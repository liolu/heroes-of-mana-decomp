/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207a194(s32, s32);              /* extern */
s32 func_ov123_0207a204();                          /* extern */
M2C_UNK func_ov123_0208b680();                      /* extern */
extern s32 data_ov123_020e12f0;

void func_ov123_0208b62c(void) {
    s32 var_r5;

    if (data_ov123_020e12f0 == 0) {
        return;
    }
    var_r5 = func_ov123_0207a204() - 1;
    if (var_r5 < 0) {
        return;
    }
    do {
        func_ov123_0207a194(data_ov123_020e12f0, var_r5);
        func_ov123_0208b680();
        var_r5 -= 1;
    } while (var_r5 >= 0);
}

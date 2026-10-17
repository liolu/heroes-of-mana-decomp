/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02079f1c(M2C_UNK, s32);          /* extern */
s32 func_ov123_0207a204();                          /* extern */

void func_ov123_02079ce0(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = func_ov123_0207a204() - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        func_ov123_02079f1c(arg0, var_r4);
        var_r4 -= 1;
    } while (var_r4 >= 0);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_0207a194(s32 *, s32);                /* extern */
extern M2C_UNK data_ov123_020d9b14;
extern M2C_UNK data_ov123_020d9b18;

void func_ov123_02079d8c(s32 *arg0, M2C_UNK (*arg1)(s32, M2C_UNK), M2C_UNK arg2) {
    s32 var_r4;

    if (arg1 == NULL) {
        func_02020d04(&data_ov123_020d9b14, &data_ov123_020d9b18, 0, 0x104);
    }
    var_r4 = *arg0 - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        arg1(func_ov123_0207a194(arg0, var_r4), arg2);
        var_r4 -= 1;
    } while (var_r4 >= 0);
}

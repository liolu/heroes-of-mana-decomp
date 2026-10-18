/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c94c8(s32);                   /* extern */
M2C_UNK func_ov123_020ca49c(s32 *);                 /* extern */
M2C_UNK func_ov123_020cae10(s32);                   /* extern */
extern s32 data_ov123_020e4714;

void func_ov123_020c918c(void) {
    s32 var_r6;
    s32 var_r5;

    var_r6 = 0;
    var_r5 = 0;
    do {
        func_ov123_020cae10(M2C_FIELD((data_ov123_020e4714 + var_r5), s32 *, 0x220));
        func_ov123_020c94c8(M2C_FIELD((data_ov123_020e4714 + var_r5), s32 *, 0x224));
        var_r6 += 1;
        var_r5 += 0x228;
    } while (var_r6 < 2);
    func_ov123_020ca49c(&data_ov123_020e4714);
}

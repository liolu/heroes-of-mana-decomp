/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

M2C_UNK func_ov123_020c8840(s32);
M2C_UNK func_ov123_020c94c8(s32);
M2C_UNK func_ov123_020ca49c(void **);
extern void *data_ov123_020e4724;

void func_ov123_020c9f18(void) {
    s32 var_r5;
    s32 tmp;
    var_r5 = 0;
    do {
        tmp = var_r5 * 4;
        func_ov123_020c8840(*(s32 *) ((u8 *) data_ov123_020e4724 + tmp + 0x78C));
        var_r5 += 1;
    } while (var_r5 < 2);
    func_ov123_020c94c8(*(s32 *) ((u8 *) data_ov123_020e4724 + 0x788));
    func_ov123_020ca49c(&data_ov123_020e4724);
}

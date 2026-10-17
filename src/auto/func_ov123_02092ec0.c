/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02068504(M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_ov123_020d5058;

void func_ov123_02092ec0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 > 0xC) {
        var_r2 = 0xC;
    }
    func_ov123_02068504(arg0, arg1, arg3 | *(s32 *) ((u8 *) &data_ov123_020d5058 + (var_r2 * 4)));
}

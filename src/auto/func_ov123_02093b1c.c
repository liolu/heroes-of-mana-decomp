#include "m2c.h"

s32 func_ov123_020736c0(s32);                       /* extern */
M2C_UNK func_ov123_02091334(M2C_UNK);               /* extern */
s32 func_ov123_020913d8(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020938c0(s32, M2C_UNK, s32);     /* extern */
extern s32 data_ov123_020e0a04;

s32 func_ov123_02093b1c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_ov123_020913d8(1);
    temp_r0 = func_ov123_020913d8(4);
    func_ov123_020938c0(temp_r5, arg0, temp_r0);
    data_ov123_020e0a04 = 4;
    if (func_ov123_020736c0(temp_r0) == 0) {
        return 0xC;
    }
    func_ov123_02091334(2);
    return 0x11;
}

#include "m2c.h"

s32 func_ov123_020cca14(s32);                       /* extern */
s32 func_ov123_020cca20(s32);                       /* extern */
s32 func_ov123_020cca2c(s32, s32);                  /* extern */
s32 func_ov123_020ce704();                          /* extern */
extern void *data_ov123_020e4790;

s32 func_ov123_020ce480(s32 arg0) {
    s32 temp_r4;

    if (func_ov123_020ce704() != 0) {
        temp_r4 = arg0 * 0xC;
        if (func_ov123_020cca14(M2C_FIELD(data_ov123_020e4790, s32 *, 0xE48) + temp_r4) == 0) {
            return 0;
        }
        if (func_ov123_020cca20(M2C_FIELD(data_ov123_020e4790, s32 *, 0xE48) + temp_r4) == 0) {
            return 0;
        }
        return func_ov123_020cca2c(M2C_FIELD(data_ov123_020e4790, s32 *, 0xDF8),
                                   M2C_FIELD(data_ov123_020e4790, s32 *, 0xE48) + temp_r4);
    }
    return -1;
}

/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK memset(s32, s32, s32);                      /* extern */
extern s32 (*data_ov123_020e3034)(s32);

s32 func_ov123_020a9e70(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = arg0 * arg1;
    temp_r0 = data_ov123_020e3034(temp_r4);
    if (temp_r0 != 0) {
        memset(temp_r0, 0, temp_r4);
    }
    return temp_r0;
}

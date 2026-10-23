#include "m2c.h"
extern u16 data_ov123_020e204c;
extern s32 data_ov123_020e2050;
u16 func_ov123_020a4fc4(s32 a, s32 b, s32 c) {
    data_ov123_020e204c = (u8) b;
    data_ov123_020e2050 = 1;
    if (c != 0) {
        data_ov123_020e204c = 0xFF;
    }
    return data_ov123_020e204c;
}

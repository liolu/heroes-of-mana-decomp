#include "m2c.h"

extern u16 data_ov123_020e47d0;

u16 func_ov123_020ce98c(void) {
    data_ov123_020e47d0 = (data_ov123_020e47d0 + 8) * 0x47;
    data_ov123_020e47d0 += 0x25;
    return data_ov123_020e47d0;
}

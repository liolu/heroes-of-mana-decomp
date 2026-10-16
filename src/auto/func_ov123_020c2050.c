#include "m2c.h"

extern void *data_ov123_020e46c8;

void func_ov123_020c2050(s8 arg0) {
    s8 var_r1;

    M2C_FIELD(data_ov123_020e46c8, s8 *, 0x1C) = arg0;
    if (arg0 == 2) {
        var_r1 = 4;
    } else {
        var_r1 = 6;
    }
    M2C_FIELD(data_ov123_020e46c8, s8 *, 0x1D) = var_r1;
}

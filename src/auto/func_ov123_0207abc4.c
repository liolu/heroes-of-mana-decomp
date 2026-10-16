#include "m2c.h"

extern s32 data_ov123_020d9be8;

void func_ov123_0207abc4(s32 arg0) {
    s32 var_r1;

    if (arg0 != 0) {
        var_r1 = arg0 & ~0x80000000;
    } else {
        var_r1 = 1;
    }
    data_ov123_020d9be8 = var_r1;
}

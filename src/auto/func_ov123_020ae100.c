#include "m2c.h"

extern void *data_ov123_020e4568;

void func_ov123_020ae100(s8 arg0) {
    if (M2C_FIELD(data_ov123_020e4568, s8 *, 0x16) == -1) {
        M2C_FIELD(data_ov123_020e4568, s8 *, 0x16) = arg0;
    }
}

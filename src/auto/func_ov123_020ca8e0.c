#include "m2c.h"

extern void *data_ov123_020e4734;

s32 func_ov123_020ca8e0(s32 arg0) {
    if (arg0 == (arg0 & M2C_FIELD(data_ov123_020e4734, u16 *, 0x32))) {
        return 1;
    }
    return 0;
}

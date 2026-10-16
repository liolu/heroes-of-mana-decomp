#include "m2c.h"

extern void *data_ov123_020e4568;

s32 func_ov123_020ae0c0(void) {
    if (data_ov123_020e4568 == NULL) {
        return 1;
    }
    if (M2C_FIELD(data_ov123_020e4568, u8 *, 0x19) == 0) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

extern void *data_ov123_020e46dc;

s32 func_ov123_020c3844(void) {
    if (data_ov123_020e46dc == NULL) {
        return 1;
    }
    if (M2C_FIELD(data_ov123_020e46dc, u8 *, 0x18) == 0) {
        return 1;
    }
    return 0;
}

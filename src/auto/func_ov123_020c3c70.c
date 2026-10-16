#include "m2c.h"

extern void *data_ov123_020e46dc;

s32 func_ov123_020c3c70(void) {
    if (M2C_FIELD(data_ov123_020e46dc, s32 *, 0x14) != 0) {
        return 1;
    }
    return 0;
}

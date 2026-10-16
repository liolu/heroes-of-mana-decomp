#include "m2c.h"

extern void *data_ov123_020e18d4;

s32 func_ov123_0209bd34(void) {
    if (data_ov123_020e18d4 != NULL) {
        return M2C_FIELD(data_ov123_020e18d4, s32 *, 0x1C);
    }
    return 0;
}

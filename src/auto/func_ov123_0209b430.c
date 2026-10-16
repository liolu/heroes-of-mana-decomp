#include "m2c.h"

extern void *data_ov123_020e18d4;

s32 func_ov123_0209b430(void) {
    if ((data_ov123_020e18d4 != NULL) && (M2C_FIELD(data_ov123_020e18d4, s32 *, 4) == 5)) {
        return 1;
    }
    return 0;
}

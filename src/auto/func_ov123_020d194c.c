#include "m2c.h"

s32 func_ov123_020cca74(void);

s32 func_ov123_020d194c(u8 *arg0) {
    if (func_ov123_020cca74()) {
        arg0[0x10] = 0;
        return 1;
    }
    return 0;
}

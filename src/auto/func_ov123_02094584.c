#include "m2c.h"

s32 func_ov123_02094640(s32);                       /* extern */

s32 func_ov123_02094584(void *arg0) {
    if ((func_ov123_02094640(arg0 + 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0)) {
        return 1;
    }
    return 0;
}

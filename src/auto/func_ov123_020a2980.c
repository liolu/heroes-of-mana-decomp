#include "m2c.h"

void *func_ov123_0209d368();                        /* extern */

s32 func_ov123_020a2980(s32 *arg0) {
    if (func_ov123_0209d368() == NULL) {
        return 0;
    }
    *arg0 = func_ov123_0209d368() + 0x2D0;
    return M2C_FIELD(func_ov123_0209d368(), u8 *, 0xD) + 1;
}

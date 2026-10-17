/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020996d4(s32);                       /* extern */

s32 func_ov123_020875f8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = func_ov123_020996d4(arg1);
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return 1;
}

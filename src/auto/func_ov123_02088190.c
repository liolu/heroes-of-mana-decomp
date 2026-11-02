/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02088bdc(void *, s32);

s32 func_ov123_02088190(void *arg0, s32 arg1) {
    arg1 = arg1 - M2C_FIELD(arg0, s32 *, 0x88);
    if (((u32) arg1 > 0x7530U) && (func_ov123_02088bdc(arg0, arg1) == 0)) {
        return 0;
    }
    return 1;
}

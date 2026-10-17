/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207b3f4();                          /* extern */
s32 func_ov123_0208a6d0(s32, s32, u16, M2C_UNK, s32); /* extern */

s32 func_ov123_02088338(void *arg0, M2C_UNK arg1, s32 arg2) {
    if (func_ov123_0208a6d0(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 4), arg1, arg2) ==
        0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x88) = func_ov123_0207b3f4();
    return 1;
}

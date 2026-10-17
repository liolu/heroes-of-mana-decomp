/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02088f5c(M2C_UNK);                   /* extern */
s32 func_ov123_02088fdc(M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */

s32 func_ov123_02088c38(M2C_UNK arg0) {
    s32 sp0;

    if (func_ov123_02088fdc(arg0, 6, 7, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    if (func_ov123_02088f5c(arg0) != 0) {
        return 1;
    }
    return 0;
}

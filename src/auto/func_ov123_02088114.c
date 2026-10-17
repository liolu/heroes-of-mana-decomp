/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02088190(M2C_UNK, M2C_UNK);          /* extern */
s32 func_ov123_020881d0(M2C_UNK, M2C_UNK);          /* extern */
s32 func_ov123_0208821c(M2C_UNK, M2C_UNK);          /* extern */
s32 func_ov123_02088294();                          /* extern */

s32 func_ov123_02088114(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_ov123_02088294() == 0) {
        return 0;
    }
    if (func_ov123_02088190(arg0, arg1) == 0) {
        return 0;
    }
    if (func_ov123_0208821c(arg0, arg1) == 0) {
        return 0;
    }
    if (func_ov123_020881d0(arg0, arg1) != 0) {
        return 1;
    }
    return 0;
}

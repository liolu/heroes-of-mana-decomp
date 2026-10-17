/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02087490(s32, M2C_UNK, s32);     /* extern */
s32 func_ov123_02088f5c(s32);                       /* extern */
s32 func_ov123_02088fdc(s32, M2C_UNK, s32, s32 *);  /* extern */

s32 func_ov123_02088c94(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp0;

    if (func_ov123_02088fdc(arg0, 5, arg2 + 7, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    func_ov123_02087490(arg0 + 0x50, arg1, arg2);
    if (func_ov123_02088f5c(arg0) != 0) {
        return 1;
    }
    return 0;
}

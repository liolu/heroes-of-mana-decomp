#include "m2c.h"

M2C_UNK func_ov123_02087b44(void *, M2C_UNK);       /* extern */
M2C_UNK func_ov123_0208805c();                      /* extern */
M2C_UNK func_ov123_020889ec(void *);                /* extern */
M2C_UNK func_ov123_02088c38();                      /* extern */
M2C_UNK func_ov123_0208a880(void *);                /* extern */

void func_ov123_020880c4(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= 7) {
            return;
        }
        func_ov123_0208805c(arg0);
        func_ov123_020889ec(arg0);
        func_ov123_02087b44(arg0, 0);
        func_ov123_0208a880(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 6;
    func_ov123_02088c38(arg0);
}

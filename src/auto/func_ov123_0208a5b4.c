#include "m2c.h"

s32 func_ov123_02087f40(void *);                    /* extern */
M2C_UNK func_ov123_020885ec();                      /* extern */
M2C_UNK func_ov123_0208ab90(void *);                /* extern */

void func_ov123_0208a5b4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    func_ov123_020885ec(arg0);
    if (func_ov123_02087f40(arg0) == 0) {
        return;
    }
    func_ov123_0208ab90(arg0);
}

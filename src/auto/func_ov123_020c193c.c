/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae100(M2C_UNK);               /* extern */
s32 func_ov123_020c1ba0();                          /* extern */
s32 func_ov123_020ca8e0(M2C_UNK);                   /* extern */

void func_ov123_020c193c(void) {
    if (func_ov123_020ca8e0(2) != 0) {
        func_ov123_020ae100(0);
        return;
    }
    if (func_ov123_020c1ba0() == 0) {
        return;
    }
    func_ov123_020ae100(0);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae4f8(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern M2C_UNK func_ov123_020b6ee8;

void func_ov123_020b6f3c(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    func_ov123_020ae4f8(1);
    func_ov123_020b2410(&func_ov123_020b6ee8);
}

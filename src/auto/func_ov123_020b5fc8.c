/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae4f8(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern M2C_UNK func_ov123_020b5f84;

void func_ov123_020b5fc8(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    func_ov123_020ae4f8(3);
    func_ov123_020b2410(&func_ov123_020b5f84);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae120();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
extern M2C_UNK func_ov123_020ba668;

void func_ov123_020ba690(void) {
    if (func_ov123_020ae120() != 0) {
        return;
    }
    func_ov123_020c36bc(6);
    func_ov123_020b2410(&func_ov123_020ba668);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae0a8();                      /* extern */
s32 func_ov123_020ae120();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
extern M2C_UNK func_ov123_020b4364;

void func_ov123_020b4380(void) {
    if (func_ov123_020ae120() == -2) {
        return;
    }
    func_ov123_020ae0a8();
    func_ov123_020b2410(&func_ov123_020b4364);
}

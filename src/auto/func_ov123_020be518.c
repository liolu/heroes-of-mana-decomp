/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae120();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
extern M2C_UNK func_ov123_020be4f0;

void func_ov123_020be518(void) {
    if (func_ov123_020ae120() != 0) {
        return;
    }
    func_ov123_020c3658();
    func_ov123_020c36bc(7);
    func_ov123_020b2410(&func_ov123_020be4f0);
}

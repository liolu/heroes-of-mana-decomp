/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae120();                          /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
extern u8 data_ov123_020e46b8;
extern M2C_UNK func_ov123_020c18b4;

void func_ov123_020c18dc(void) {
    if (data_ov123_020e46b8 != 0) {
        return;
    }
    if (func_ov123_020ae120() != 0) {
        return;
    }
    data_ov123_020e46b8 = 2;
    func_ov123_020c3658();
    func_ov123_020c36bc(7);
    func_ov123_020b2410(&func_ov123_020c18b4);
}

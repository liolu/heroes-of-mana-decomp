/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b2dac();                      /* extern */
M2C_UNK func_ov123_020b2e28();                      /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern u8 data_ov123_020e4630;
extern u8 data_ov123_020e4634;
extern M2C_UNK func_ov123_020b6178;

void func_ov123_020b6260(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if ((data_ov123_020e4630 == 0) && (data_ov123_020e4634 == 1)) {
        func_ov123_020b2dac();
    } else {
        func_ov123_020b2e28();
    }
    func_ov123_020b2410(&func_ov123_020b6178);
}

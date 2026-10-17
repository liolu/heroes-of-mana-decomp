/* compiler: 1.2/sp3 */
#include "m2c.h"

s8 func_ov123_020ae2a4(M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_ov123_020ae47c(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b6084();                      /* extern */
extern s8 data_ov123_020e4628;
extern M2C_UNK func_ov123_020b6014;

void func_ov123_020b6120(void) {
    func_ov123_020b6084();
    func_ov123_020ae47c(0x20);
    data_ov123_020e4628 = func_ov123_020ae2a4(0x3C, -1, 0);
    func_ov123_020b2410(&func_ov123_020b6014);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020ca400(M2C_UNK, M2C_UNK);      /* extern */
extern u8 data_ov123_020e4628;
extern M2C_UNK func_ov123_020b5fc8;

void func_ov123_020b6014(void) {
    func_ov123_020c9740(2, 0, 0x15, 8);
    func_ov123_020ca400(0, 0x15);
    if (data_ov123_020e4628 != 0) {
        func_ov123_020c9740(2, 1, 1, 8);
        func_ov123_020ca400(1, 1);
    }
    func_ov123_020b2410(&func_ov123_020b5fc8);
}

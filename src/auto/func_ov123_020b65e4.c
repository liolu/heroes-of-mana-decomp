#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b2db8(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
extern s8 data_ov123_020e4638;
extern M2C_UNK func_ov123_020b67f4;

void func_ov123_020b65e4(s32 arg0) {
    func_ov123_020c3658();
    if (arg0 == 0) {
        data_ov123_020e4638 = 1;
        func_ov123_020c36bc(0x10);
    } else {
        data_ov123_020e4638 = 2;
        func_ov123_020c36bc(0x12);
    }
    func_ov123_020b2db8(0);
    func_ov123_020b2410(&func_ov123_020b67f4);
}

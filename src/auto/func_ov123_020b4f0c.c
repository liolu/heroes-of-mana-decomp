/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b2db8(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b2e28();                      /* extern */
M2C_UNK func_ov123_020c2c78();                      /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
extern s8 data_ov123_020e461c;
extern M2C_UNK func_ov123_020b5048;

void func_ov123_020b4f0c(s32 arg0) {
    if (arg0 == 2) {
        func_ov123_020c2c78();
        data_ov123_020e461c = 1;
        func_ov123_020c3658();
        func_ov123_020c36bc(0x10);
    } else if (arg0 == 3) {
        data_ov123_020e461c = 2;
        func_ov123_020c3658();
        func_ov123_020c36bc(0x12);
    } else {
        data_ov123_020e461c = 0;
        func_ov123_020c3658();
        func_ov123_020c36bc(0x12);
    }
    func_ov123_020b2db8(0);
    func_ov123_020b2e28();
    func_ov123_020b2410(&func_ov123_020b5048);
}

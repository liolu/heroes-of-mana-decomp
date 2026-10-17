/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae090();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c4814(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c536c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern u8 data_ov123_020e46b8;
extern M2C_UNK func_ov123_020c155c;
extern M2C_UNK func_ov123_020c15f0;
extern M2C_UNK func_ov123_020c18b4;

void func_ov123_020c1628(u32 arg0) {
    if (data_ov123_020e46b8 != 0) {
        return;
    }
    switch (arg0) {
        case 0:
            data_ov123_020e46b8 = 3;
            func_ov123_020c3658();
            func_ov123_020c36bc(0x12);
            func_ov123_020c536c(0x10, 1, 1, -1, 0);
            func_ov123_020ae090();
            func_ov123_020b2410(&func_ov123_020c15f0);
            return;
        case 1:
            data_ov123_020e46b8 = 1;
            func_ov123_020c3658();
            func_ov123_020b2410(&func_ov123_020c18b4);
            return;
        case 2:
            func_ov123_020c3658();
            func_ov123_020c4814(0);
            func_ov123_020c536c(0x11, 0, 1, -1, 0);
            func_ov123_020ae090();
            func_ov123_020b2410(&func_ov123_020c155c);
            return;
        case 3:
            data_ov123_020e46b8 = 2;
            func_ov123_020c3658();
            func_ov123_020c36bc(9);
            func_ov123_020b2410(&func_ov123_020c18b4);
            return;
        default:
            return;
    }
}

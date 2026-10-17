/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae0a8();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c4814(M2C_UNK *);             /* extern */
s32 func_ov123_020c52f0();                          /* extern */
extern u8 data_ov123_020e46b8;
extern M2C_UNK func_ov123_020c1628;
extern M2C_UNK func_ov123_020c18b4;
extern M2C_UNK func_ov123_020c1984;

void func_ov123_020c14e4(void) {
    if (func_ov123_020c52f0() != 0) {
        return;
    }
    if (data_ov123_020e46b8 == 1) {
        func_ov123_020b2410(&func_ov123_020c18b4);
        return;
    }
    func_ov123_020c36bc(0xB);
    func_ov123_020ae0a8();
    data_ov123_020e46b8 = 0;
    func_ov123_020c4814(&func_ov123_020c1628);
    func_ov123_020b2410(&func_ov123_020c1984);
}

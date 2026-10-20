/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020c530c();                          /* extern */
M2C_UNK func_ov123_020c5320();                      /* extern */
extern s8 data_ov123_020e4608;
extern M2C_UNK func_ov123_020b3aa8;

void func_ov123_020b3ad4(void) {
    switch (func_ov123_020c530c()) {
    case 1:
        func_ov123_020c36bc(0xE);
        data_ov123_020e4608 = 1;
        break;
    case 0:
        func_ov123_020c36bc(7);
        break;
    default:
        return;
    }
    func_ov123_020c5320();
    func_ov123_020b2410(&func_ov123_020b3aa8);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020c530c();                          /* extern */
M2C_UNK func_ov123_020c5320();                      /* extern */
extern s8 data_ov123_020e46b8;
extern M2C_UNK func_ov123_020c14e4;

void func_ov123_020c155c(void) {
    s32 v;

    v = func_ov123_020c530c();
    switch (v) {
        case 1:
            data_ov123_020e46b8 = 3;
            func_ov123_020c36bc(6);
            break;
        case 0:
            data_ov123_020e46b8 = 1;
            func_ov123_020c36bc(7);
            break;
        default:
            return;
    }
    func_ov123_020c5320();
    func_ov123_020b2410(&func_ov123_020c14e4);
}

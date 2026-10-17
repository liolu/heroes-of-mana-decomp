/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020b2dd0();                          /* extern */
M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern u8 data_ov123_020e4630;
extern u8 data_ov123_020e4634;
extern M2C_UNK func_ov123_020b4e18;
extern M2C_UNK func_ov123_020b51ac;
extern M2C_UNK func_ov123_020b6120;

void func_ov123_020b6178(void) {
    if (((data_ov123_020e4630 != 0) || (data_ov123_020e4634 == 0)) && (func_ov123_020b2dd0() == 0)) {
        return;
    }
    func_ov123_020c9af4(0);
    func_ov123_020ca3a4(0, 0x15);
    if (data_ov123_020e4634 == 0) {
        func_ov123_020ae260();
        func_ov123_020ca3a4(1, 1);
    }
    func_ov123_020b23fc(0, 1);
    if (data_ov123_020e4630 != 0) {
        func_ov123_020b2410(&func_ov123_020b6120);
        return;
    }
    if (data_ov123_020e4634 == 0) {
        func_ov123_020ca3a4(1, 1);
        func_ov123_020b2410(&func_ov123_020b4e18);
        return;
    }
    func_ov123_020b2410(&func_ov123_020b51ac);
}

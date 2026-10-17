/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae0c0();                          /* extern */
M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern u8 data_ov123_020e46b4;
extern M2C_UNK func_ov123_020bfb84;
extern M2C_UNK func_ov123_020c1b0c;

void func_ov123_020c10bc(void) {
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if ((data_ov123_020e46b4 == 0) && (func_ov123_020c9820(1) != 0)) {
        return;
    }
    if (func_ov123_020ae0c0() == 0) {
        return;
    }
    func_ov123_020c9af4(0);
    if (data_ov123_020e46b4 == 0) {
        func_ov123_020ae260();
        func_ov123_020ca3a4(1, 1);
    }
    func_ov123_020ca3a4(0, 0x15);
    if (data_ov123_020e46b4 == 0) {
        func_ov123_020b23fc(2, 1);
        func_ov123_020b2410(&func_ov123_020bfb84);
        return;
    }
    func_ov123_020b23fc(2, 1);
    func_ov123_020b2410(&func_ov123_020c1b0c);
}

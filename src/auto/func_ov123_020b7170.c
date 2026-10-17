/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020b23c0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK func_ov123_020c0dec;

void func_ov123_020b7170(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    func_ov123_020c9af4(0);
    func_ov123_020ae260();
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x15);
    func_ov123_020b23fc(0, 0);
    func_ov123_020b23c0(0, 1);
    func_ov123_020b2410(&func_ov123_020c0dec);
}

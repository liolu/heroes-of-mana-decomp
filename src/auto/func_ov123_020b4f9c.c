/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ada60();                      /* extern */
M2C_UNK func_ov123_020aeaa0();                      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020b2dd0();                          /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern u8 data_ov123_020e461c;
extern M2C_UNK func_ov123_020b5454;
extern M2C_UNK func_ov123_020b5d24;
extern M2C_UNK func_ov123_020b6120;

void func_ov123_020b4f9c(void) {
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if (func_ov123_020b2dd0() == 0) {
        return;
    }
    func_ov123_020aeaa0();
    func_ov123_020ada60();
    func_ov123_020c9af4(0);
    func_ov123_020ca3a4(0, 0x15);
    func_ov123_020b23fc(0, 1);
    if (data_ov123_020e461c == 0) {
        func_ov123_020b2410(&func_ov123_020b6120);
        return;
    }
    if (data_ov123_020e461c == 2) {
        func_ov123_020b2410(&func_ov123_020b5d24);
        return;
    }
    func_ov123_020b2410(&func_ov123_020b5454);
}

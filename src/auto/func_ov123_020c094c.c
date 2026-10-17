/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020b2398(M2C_UNK, s32 *);        /* extern */
M2C_UNK func_ov123_020b23c0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c3844();                          /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK func_ov123_020b3a24;
extern M2C_UNK func_ov123_020bd1bc;

void func_ov123_020c094c(void) {
    s32 sp0;

    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if (func_ov123_020c3844() == 0) {
        return;
    }
    func_ov123_020c9af4(0);
    func_ov123_020ae260();
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x15);
    func_ov123_020b23fc(2, 1);
    func_ov123_020b2398(0, &sp0);
    if (sp0 == 0) {
        func_ov123_020b23c0(0, 0);
        func_ov123_020b2410(&func_ov123_020bd1bc);
        return;
    }
    func_ov123_020b2410(&func_ov123_020b3a24);
}

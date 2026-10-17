/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020adaa0(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ae2a4(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020ae47c(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ae530(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ae8b8();                      /* extern */
M2C_UNK func_ov123_020aeaec(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020b2398(M2C_UNK, s32 *);        /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c06dc();                      /* extern */
M2C_UNK func_ov123_020c0774();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
extern s8 data_ov123_020e46a8;
extern M2C_UNK func_ov123_020c0668;

void func_ov123_020c0838(void) {
    s32 sp0;

    data_ov123_020e46a8 = 0;
    func_ov123_020c0774();
    func_ov123_020b2398(0, &sp0);
    if (sp0 == 0) {
        func_ov123_020ae2a4(0x31, -1, 0);
    }
    func_ov123_020ae530(2);
    if (sp0 == 0) {
        func_ov123_020ae8b8();
    }
    func_ov123_020ae47c(0x2C);
    func_ov123_020adaa0(0);
    func_ov123_020c06dc();
    func_ov123_020aeaec(0);
    func_ov123_020c36bc(0xC);
    func_ov123_020b2410(&func_ov123_020c0668);
}

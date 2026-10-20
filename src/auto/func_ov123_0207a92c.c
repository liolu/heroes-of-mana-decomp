#include "m2c.h"

M2C_UNK func_ov123_02079834(M2C_UNK *, M2C_UNK *);  /* extern */
M2C_UNK func_ov123_02079840(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0207984c(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_0207a978(M2C_UNK *, M2C_UNK);    /* extern */

void func_ov123_0207a92c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[0x10];
    u8 sp10[0x58];

    func_ov123_0207984c(sp10);
    func_ov123_02079840(sp10, arg0, arg1);
    func_ov123_02079834(sp0, sp10);
    func_ov123_0207a978(sp0, arg2);
}

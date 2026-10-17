#include "m2c.h"

M2C_UNK func_ov123_020cb9f0();                      /* extern */
M2C_UNK func_ov123_020cbe30();                      /* extern */
M2C_UNK func_ov123_020cc85c(M2C_UNK, u32 *);        /* extern */
M2C_UNK func_ov123_020cca68();                      /* extern */

void func_ov123_020d29f0(void) {
    u32 sp0;

    func_ov123_020cc85c(0, &sp0);
    switch (sp0) {
        case 3:
            func_ov123_020cbe30();
            func_ov123_020cb9f0();
            func_ov123_020cca68();
            return;
        case 6:
            func_ov123_020cbe30();
            func_ov123_020cb9f0();
            func_ov123_020cca68();
            return;
        case 0:
        case 1:
        case 2:
        case 4:
        case 5:
        case 7:
            return;
        default:
            return;
    }
}

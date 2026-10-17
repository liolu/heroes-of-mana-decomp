/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae2a4(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020ae8b8();                      /* extern */
M2C_UNK func_ov123_020b2398(M2C_UNK, s32 *);        /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c0d68();                      /* extern */
M2C_UNK func_ov123_020c29e0();                      /* extern */
M2C_UNK func_ov123_020c2fac();                      /* extern */
extern M2C_UNK func_ov123_020c0d0c;

void func_ov123_020c0dec(void) {
    s32 sp0;

    func_ov123_020c29e0();
    func_ov123_020b2398(0, &sp0);
    func_ov123_020c0d68();
    func_ov123_020ae2a4(0x31, -1, 0);
    if (sp0 != 2) {
        func_ov123_020ae8b8();
    }
    if (sp0 == 1) {
        func_ov123_020c2fac();
    }
    func_ov123_020b2410(&func_ov123_020c0d0c);
}

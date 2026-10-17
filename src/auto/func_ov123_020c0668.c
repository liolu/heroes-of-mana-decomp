/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2398(M2C_UNK, s32 *);        /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020ca400(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK func_ov123_020c0624;

void func_ov123_020c0668(void) {
    s32 sp0;

    func_ov123_020c9740(2, 0, 0x15, 8);
    func_ov123_020ca400(0, 0x15);
    func_ov123_020b2398(0, &sp0);
    if (sp0 == 0) {
        func_ov123_020c9740(2, 1, 1, 8);
        func_ov123_020ca400(1, 1);
    }
    func_ov123_020b2410(&func_ov123_020c0624);
}

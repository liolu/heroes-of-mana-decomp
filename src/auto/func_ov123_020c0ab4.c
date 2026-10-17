/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020ca400(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK func_ov123_020c0a84;

void func_ov123_020c0ab4(void) {
    func_ov123_020c9740(2, 0, 0x15, 8);
    func_ov123_020ca400(0, 0x15);
    func_ov123_020b2410(&func_ov123_020c0a84);
}

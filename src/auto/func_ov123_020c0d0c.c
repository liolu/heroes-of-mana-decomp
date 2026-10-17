/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_020ca400(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK func_ov123_020c0c84;

void func_ov123_020c0d0c(void) {
    func_ov123_020c9740(2, 1, 1, 8);
    func_ov123_020c9740(2, 0, 0x14, 8);
    func_ov123_020ca400(1, 1);
    func_ov123_020ca400(0, 0x14);
    func_ov123_020b2410(&func_ov123_020c0c84);
}

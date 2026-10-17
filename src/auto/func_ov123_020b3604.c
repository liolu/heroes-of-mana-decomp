/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern M2C_UNK func_ov123_020b3540;

void func_ov123_020b3604(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    func_ov123_020c9740(3, 1, 1, 8);
    func_ov123_020c9740(3, 0, 0x16, 8);
    func_ov123_020b2410(&func_ov123_020b3540);
}

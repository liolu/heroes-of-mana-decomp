/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae134();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern M2C_UNK func_ov123_020b41f8;

void func_ov123_020b427c(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    func_ov123_020ae134();
    func_ov123_020c9740(3, 1, 1, 8);
    func_ov123_020c9740(3, 0, 0x15, 8);
    func_ov123_020b2410(&func_ov123_020b41f8);
}

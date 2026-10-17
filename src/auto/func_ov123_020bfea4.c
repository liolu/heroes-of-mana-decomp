/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae134();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
extern u8 data_ov123_020e46a0;
extern M2C_UNK func_ov123_020bfd44;

void func_ov123_020bfea4(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (data_ov123_020e46a0 != 0) {
        func_ov123_020ae134();
    }
    func_ov123_020c9740(3, 1, 1, 8);
    func_ov123_020c9740(3, 0, 0x14, 8);
    func_ov123_020b2410(&func_ov123_020bfd44);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c52f0();                          /* extern */
M2C_UNK func_ov123_020c9740(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern u8 data_ov123_020e4634;
extern M2C_UNK func_ov123_020b6260;

void func_ov123_020b62d8(void) {
    if (func_ov123_020c52f0() != 0) {
        return;
    }
    if (data_ov123_020e4634 == 0) {
        func_ov123_020c9740(3, 1, 1, 8);
    }
    func_ov123_020c9740(3, 0, 0x15, 8);
    func_ov123_020b2410(&func_ov123_020b6260);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
extern u8 data_ov123_020e4648;
extern M2C_UNK func_ov123_020b71f0;

void func_ov123_020b7130(void) {
    data_ov123_020e4648 += 1;
    if ((u32) data_ov123_020e4648 < 0x78U) {
        return;
    }
    func_ov123_020b2410(&func_ov123_020b71f0);
}

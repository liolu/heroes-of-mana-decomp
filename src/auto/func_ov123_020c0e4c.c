/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
extern u8 data_ov123_020e46b0;
extern M2C_UNK func_ov123_020c0f0c;

void func_ov123_020c0e4c(void) {
    data_ov123_020e46b0 += 1;
    if ((u32) data_ov123_020e46b0 < 0x78U) {
        return;
    }
    func_ov123_020b2410(&func_ov123_020c0f0c);
}

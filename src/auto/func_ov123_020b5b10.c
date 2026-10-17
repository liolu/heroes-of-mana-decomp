/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
extern u8 data_ov123_020e4624;
extern M2C_UNK func_ov123_020b5bc4;

void func_ov123_020b5b10(void) {
    data_ov123_020e4624 += 1;
    if ((u32) data_ov123_020e4624 < 0x78U) {
        return;
    }
    func_ov123_020b2410(&func_ov123_020b5bc4);
}

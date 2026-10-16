/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov123_020e45cc;
extern u32 data_ov123_020e45d8;

u8 func_ov123_020b22f4(void) {
    if (data_ov123_020e45cc == 6) {
        return 0x38U;
    }
    if ((data_ov123_020e45cc == 1) && !(((u32) data_ov123_020e45d8 >> 4) & 2)) {
        return 0x37U;
    }
    return (u8) (data_ov123_020e45cc + 0x31);
}

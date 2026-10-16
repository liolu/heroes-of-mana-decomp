/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov123_020e470c;

void func_ov123_020c803c(u8 *arg0, s8 *arg1) {
    *arg0 = M2C_FIELD(data_ov123_020e470c, u8 *, 0xA90);
    if (M2C_FIELD(data_ov123_020e470c, u8 *, 0xA90) != M2C_FIELD(data_ov123_020e470c, u8 *, 0xA91)) {
        *arg1 = 1;
    } else {
        *arg1 = 0;
    }
    M2C_FIELD(data_ov123_020e470c, u8 *, 0xA91) = (u8) M2C_FIELD(data_ov123_020e470c, u8 *, 0xA90);
}

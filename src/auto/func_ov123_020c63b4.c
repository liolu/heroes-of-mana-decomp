/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c77c0(void *);                /* extern */
extern void *data_ov123_020e46e8;

void func_ov123_020c63b4(void *arg0) {
    data_ov123_020e46e8 = arg0;
    func_ov123_020c77c0(arg0 + 0x1B160);
    M2C_FIELD(data_ov123_020e46e8, s32 *, 0x1B140) = 0;
    M2C_FIELD(data_ov123_020e46e8, s32 *, 0x1B144) = 0;
}

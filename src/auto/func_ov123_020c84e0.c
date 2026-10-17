/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c6934();                      /* extern */
M2C_UNK func_ov123_020c8540();                      /* extern */
extern void *data_ov123_020e470c;

s32 func_ov123_020c84e0(void) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(data_ov123_020e470c, u8 *, 0xA90);
    if ((temp_r0 == 1) || (temp_r0 == 0x1A) || (temp_r0 == 0x1D)) {
        func_ov123_020c8540();
        func_ov123_020c6934();
        M2C_FIELD(data_ov123_020e470c, u8 *, 0xA90) = 2U;
        return 1;
    }
    return 0;
}

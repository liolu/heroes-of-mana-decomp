/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c5e0c();                      /* extern */
extern void *data_ov123_020e470c;

s32 func_ov123_020c84a0(void) {
    if (M2C_FIELD(data_ov123_020e470c, u8 *, 0xA90) != 5) {
        return 0;
    }
    M2C_FIELD(data_ov123_020e470c, u8 *, 0xA90) = 6U;
    func_ov123_020c5e0c();
    return 1;
}

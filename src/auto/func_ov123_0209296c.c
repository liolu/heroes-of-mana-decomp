/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020913d8(M2C_UNK);                   /* extern */
s32 func_ov123_020926fc(s32);                       /* extern */

s32 func_ov123_0209296c(void) {
    if (func_ov123_020926fc(func_ov123_020913d8(1) + 0xA) == 1) {
        return 0x12;
    }
    return 0x11;
}

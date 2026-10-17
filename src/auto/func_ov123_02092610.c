/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02072e94();                          /* extern */
s32 func_ov123_020736b4();                          /* extern */

s32 func_ov123_02092610(void) {
    s32 temp_r0;

    if (func_ov123_02072e94() != 0) {
        return 0;
    }
    temp_r0 = func_ov123_020736b4();
    if ((temp_r0 == 0) || (temp_r0 == -0x27)) {
        return 1;
    }
    return 0;
}

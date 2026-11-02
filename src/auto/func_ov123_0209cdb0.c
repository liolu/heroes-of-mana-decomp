/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0209ce1c(s32);
extern u8 *data_ov123_020e18dc;

s32 func_ov123_0209cdb0(s32 a) {
    s32 i;

    if (data_ov123_020e18dc == NULL || a == 0) {
        return -1;
    }
    for (i = 0; i < *(s32 *) (data_ov123_020e18dc + 0x14); i++) {
        if (a == func_ov123_0209ce1c(i)) {
            return i;
        }
    }
    return -1;
}

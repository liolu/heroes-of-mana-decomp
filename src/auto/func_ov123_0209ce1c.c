/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020943cc(s32, s32);                  /* extern */
s32 func_ov123_0209bd34();                          /* extern */
extern void *data_ov123_020e18dc;

s32 func_ov123_0209ce1c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(data_ov123_020e18dc, s32 *, 0x18);
    if (temp_r4 == 0) {
        return 0;
    }
    temp_r0 = func_ov123_020943cc(func_ov123_0209bd34(), (arg0 * 0xC) + temp_r4);
    if ((temp_r0 != 0) && (temp_r0 != -1)) {
        return temp_r0;
    }
    return 0;
}

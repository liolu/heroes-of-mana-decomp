/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 *data_ov123_020e1748;

s32 func_ov123_020a28d8(void **a);
s32 func_ov123_020a2980(void **a);

s32 func_ov123_0209aba8(void **arg0) {
    u8 *p;

    if (data_ov123_020e1748 == NULL) {
        return 0;
    }
    *arg0 = data_ov123_020e1748 + 0x624;
    p     = data_ov123_020e1748;
    if (p[0x369] == 2 || ((volatile u8 *) p)[0x369] == 3) {
        return func_ov123_020a28d8(arg0);
    }
    return func_ov123_020a2980(arg0);
}

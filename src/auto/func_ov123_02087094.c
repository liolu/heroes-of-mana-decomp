/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_02087094(u8 *arg0, u8 *arg1) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (i != 0 && i != 0xD && arg0[i] != arg1[i]) {
            return 0;
        }
    }
    return 1;
}

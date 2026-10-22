/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void *data_ov123_020df180;
u16 func_ov123_02067800(s32 arg0) {
    s32 i;
    s32 n;
    n = arg0;
    for (i = 0; i < 13; i++) {
        if (M2C_FIELD(data_ov123_020df180, s32 *, 0x2264) & (1 << ((n % 13) + 1))) {
            break;
        }
        n++;
    }
    return (arg0 + i) % 13 + 1;
}

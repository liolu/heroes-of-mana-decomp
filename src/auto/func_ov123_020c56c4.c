/* compiler: 1.2/sp3 */
#include "m2c.h"

extern void *data_ov123_020e46e8;

u16 func_ov123_020c56c4(u8 *arg0) {
    u16 i;
    s32 off;
    u8 *d;

    i = 1;
    do {
        if (M2C_FIELD(data_ov123_020e46e8, u16 *, 2) & (1 << i)) {
            off = (i - 1) * 0x1E;
            d   = (u8 *) data_ov123_020e46e8 + 0x24 + off;
            if (arg0[0] == d[0] && arg0[1] == d[1] && arg0[2] == d[2] && arg0[3] == d[3] && arg0[4] == d[4] &&
                arg0[5] == d[5]) {
                return *(u16 *) ((u8 *) data_ov123_020e46e8 + off + 0x2A);
            }
        }
        i += 1;
    } while (i < 2);
    return 0;
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov123_020e46e8;

s32 func_ov123_020c5784(s32 arg0) {
    if (M2C_FIELD(data_ov123_020e46e8, u16 *, 2) & (1 << arg0)) {
        return ((arg0 - 1) * 0x1E) + (s32) (data_ov123_020e46e8 + 0xE);
    }
    return 0;
}

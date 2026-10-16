/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_ov123_020e45d8;

s32 func_ov123_020b2350(s32 arg0) {
    if (((u32) data_ov123_020e45d8 >> 4) & arg0) {
        return 1;
    }
    return 0;
}

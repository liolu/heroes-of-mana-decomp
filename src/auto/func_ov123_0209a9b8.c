#include "m2c.h"
extern u32 data_ov123_020e1750[];
s32 func_ov123_0209a9b8(void) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (data_ov123_020e1750[i] == 0) {
            return i;
        }
    }
    return -1;
}

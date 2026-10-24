/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov123_020df1b0;
extern u8 data_ov123_020df1b4[];
s32 func_0202d478(s32, s32);

u8 func_ov123_02069504(void) {
    s32 sum = 0;
    s32 i;
    u32 cnt = data_ov123_020df1b0;
    if (cnt > 16) {
        for (i = 0; i < 16; i++) {
            sum += data_ov123_020df1b4[i];
        }
        sum = sum / 16;
    } else if (cnt != 0) {
        for (i = 0; i < (s32) cnt; i++) {
            sum += data_ov123_020df1b4[i];
        }
        sum = func_0202d478(sum, (s32) cnt);
    }
    return sum;
}

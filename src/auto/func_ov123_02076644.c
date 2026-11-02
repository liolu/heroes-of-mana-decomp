/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_ov123_020766a8(u8 *p, s32 n, s32 stride, s32 key);
extern u16 data_ov123_020d98bc[];
u32 func_ov123_02076644(u8 *a, s32 b, s32 c) {
    u32 i;
    for (i = 0; i < 2; i++) {
        if (func_ov123_020766a8(a, b, c, data_ov123_020d98bc[i]) != 0) {
            return data_ov123_020d98bc[i];
        }
    }
    return 0;
}

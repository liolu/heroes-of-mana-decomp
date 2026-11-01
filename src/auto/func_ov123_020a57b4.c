/* compiler: 1.2/sp3 */
#include "m2c.h"

u8 func_ov123_020a57b4(u8 *arg0) {
    s32 cnt;
    s32 i;
    s32 j;
    s32 v;

    i   = 0;
    cnt = i;
    for (; i < 4; i++) {
        v = arg0[i];
        for (j = 0; j < 8; j++) {
            if ((s32) v >> j & 1) {
                cnt++;
            }
        }
    }
    return cnt;
}

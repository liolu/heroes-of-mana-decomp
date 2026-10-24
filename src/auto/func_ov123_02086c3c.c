/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 *func_ov123_0207a194(s32, s32);
s32 func_ov123_0207a204(s32);
extern s32 data_ov123_020e0e9c;

s32 func_ov123_02086c3c(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 *p;

    if (data_ov123_020e0e9c == 0) {
        return -1;
    }
    for (i = 0; i < func_ov123_0207a204(data_ov123_020e0e9c); i++) {
        p = func_ov123_0207a194(data_ov123_020e0e9c, i);
        if (p[0] != arg0) {
            continue;
        }
        if (p[1] != arg1) {
            continue;
        }
        if (p[2] == arg2) {
            return i;
        }
    }
    return -1;
}

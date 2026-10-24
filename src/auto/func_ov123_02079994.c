/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u8 data_ov123_020e0e00[];
extern u16 data_ov123_020e0df8[];
extern u8 data_ov123_020d9aec[];
s32 func_020213f0(void *, void *, s32);
s32 func_ov123_02079994(s8 *a, s32 len, u8 *b, u32 *out) {
    u32 v;
    if (len < 7) {
        return 1;
    }
    if (func_020213f0(b + 4, data_ov123_020e0e00, 4) != 0) {
        return 1;
    }
    if (*(u16 *) (b + 2) != data_ov123_020e0df8[3]) {
        return 1;
    }
    if (func_020213f0(a, data_ov123_020d9aec, 3) != 0) {
        return 1;
    }
    v = (a[3] << 24) & 0xff000000;
    v |= (a[4] << 16) & 0xff0000;
    v |= (a[5] << 8) & 0xff00;
    v |= a[6] & 0xff;
    *out = v;
    return 0;
}

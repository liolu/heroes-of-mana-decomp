#include "m2c.h"
extern u8 *data_ov123_020e4790;
u32 func_ov123_020cc448(s32 a, u32 b) {
    u8 *p = data_ov123_020e4790;
    s32 m;
    if (p == 0) {
        return 0;
    }
    m = *(s32 *) (p + 0xe08);
    if (m == 0) {
        return 0;
    }
    if (m != 2) {
        return 0;
    }
    if (a != 0) {
        if (b < 1 || b > 0xff) {
            return 0;
        }
    } else {
        if (b < 1 || b > 0xf) {
            return 0;
        }
    }
    return 1;
}

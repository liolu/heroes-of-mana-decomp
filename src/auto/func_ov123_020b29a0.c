/* compiler: 1.2/sp3 */
#include "m2c.h"
struct Tb {
    u32 *idx;
    u8 *base;
};
s16 *func_ov123_020b29a0(struct Tb *a, s32 b, s32 c, s32 d) {
    s16 *p = (s16 *) (a->base + a->idx[b & 0xFFFF]);
    if (c >= 0) {
        p[c] = d + 0x30;
    }
    return p;
}

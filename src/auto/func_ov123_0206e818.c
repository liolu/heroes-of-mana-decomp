#include "m2c.h"
void func_ov123_0206e818(u8 *a, u8 *b) {
    u8 *p;
    s32 n;
    s32 rem;
    s32 t;
    s32 hi;
    s32 lo;
    *(u16 *) (b + 0x2e) = 0x218;
    p                   = a + 0x14;
    n                   = ((a[0xc] & 0xf0) / 4) - 0x14;
    rem                 = n - 1;
    if (n == 0) {
        return;
    }
    do {
        t = *p++;
        if (t == 0) {
            return;
        }
        if (t != 1) {
            if (t == 2) {
                hi                  = p[1];
                lo                  = p[2];
                *(u16 *) (b + 0x2e) = (p[1] << 8) | p[2];
                p += 3;
                rem -= 3;
            } else {
                t = p[0] - 1;
                rem -= t;
                p += t;
            }
        }
    } while (rem-- != 0);
}

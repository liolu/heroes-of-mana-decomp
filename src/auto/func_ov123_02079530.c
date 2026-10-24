/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_ov123_02079530(u16 *d, u16 *s, u32 b, s32 n) {
    s32 i = 0;
    if (i < n) {
        do {
            u32 v = s[i] - b;
            d[i]  = v;
            b     = (v >> 16) & 1;
            if (!b) {
                break;
            }
            i++;
        } while (i < n);
    }
    if (d == s) {
        return;
    }
    i++;
    if (i < n) {
        do {
            d[i] = s[i];
            i++;
        } while (i < n);
    }
}

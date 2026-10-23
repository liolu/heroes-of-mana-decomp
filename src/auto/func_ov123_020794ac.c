/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_ov123_020794ac(u16 *a, u32 c, s32 i, s32 n) {
    while (c != 0 && i < n) {
        u32 t = c + a[i];
        a[i]  = t;
        c     = t >> 16;
        i++;
    }
}

/* compiler: 1.2/sp3 */
#include "m2c.h"
u8 *func_ov123_0209d368(void);

void func_ov123_020a29b4(void) {
    s32 n = -1;
    s32 i;
    u8 *p;

    for (i = 0; i < 32; i++) {
        u32 m;
        u32 v;

        p = func_ov123_0209d368();
        m = 1 << i;
        v = *(u32 *) (p + 0x2f0);
        if (m & v) {
            n++;
        }
    }
    if (n == -1) {
        p      = func_ov123_0209d368();
        p[0xe] = 0;
    } else {
        p      = func_ov123_0209d368();
        p[0xe] = n;
    }
}

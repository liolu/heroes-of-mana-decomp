/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct G {
    u8 pad[0x1d];
    u8 flag;
} G;
extern G *data_ov123_020e18dc;
extern s32 func_ov123_0209ce1c(s32);
extern s32 func_ov123_02094a5c(u8 *);
extern void func_ov123_0209c850(u8 *, s32, s32);
s32 func_ov123_0209c798(u8 *a, s32 n, s32 k) {
    s32 i;
    s32 r;
    s32 pad;
    pad = n;
    for (i = 0; i < n; i++) {
        r = func_ov123_0209ce1c(i);
        if (r != 0 && r == k) {
            if (func_ov123_02094a5c(a + n * 12) != 0 && func_ov123_02094a5c(a + i * 12) == 0) {
                func_ov123_0209c850(a, i, n);
            } else {
                func_ov123_0209c850(a, n, i);
            }
            data_ov123_020e18dc->flag = 1;
            return 1;
        }
    }
    return 0;
}

/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s32 func_ov123_02069708(s32, s32, s32);
extern s32 func_ov123_0206ae78(u8 *a0, s32 a1, s32 a2, s32 a3, s32 a5, s32 a6, s32 a7);
s32 func_ov123_0206ad1c(u8 *a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 r;
    if (a6 & 0x100) {
        r  = func_ov123_02069708(*(s32 *) (a0 + 4), *(s32 *) (a0 + 0xC), a7);
        a2 = a2 + (a4 - r);
    } else {
        if (a6 & 0x80) {
            r  = func_ov123_02069708(*(s32 *) (a0 + 4), *(s32 *) (a0 + 0xC), a7);
            a2 = a2 + ((a4 + 1) / 2 - (r + 1) / 2);
        }
    }
    return func_ov123_0206ae78(a0, a1, a2, a3, a5, a6, a7);
}

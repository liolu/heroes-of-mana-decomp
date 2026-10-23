/* compiler: 1.2/sp3 -O2,p */
#include "m2c.h"

u16 func_ov123_0207039c(s32 a0, u32 a1, u16 a2) {
    s32 r0;
    u32 r2;
    u32 t0;
    u32 t3b;
    u32 r1;
    u16 w;

    r0 = a0;
    r1 = a1;
    r2 = a2;
    if (r0 & 1) {
        if (r1 > 1U) {
            do {
                r1 -= 2;
                r2 += (u16) ((*(u8 *) r0 << 8) | *(u8 *) (r0 + 1));
                r0 += 2;
            } while (r1 > 1U);
        }
    } else {
        w  = r2;
        r2 = (u16) (((s32) w >> 8) | (w << 8));
        if (r1 > 1U) {
            do {
                r1 -= 2;
                r2 += *(u16 *) r0;
                r0 += 2;
            } while (r1 > 1U);
        }
        t3b = (0xFF00FF & (r2 >> 8)) | (0xFF00FF00 & (r2 << 8));
        r2  = (t3b >> 0x10) | (t3b << 0x10);
    }
    if (r1 != 0) {
        r2 += *(u8 *) r0 << 8;
    }
    t0 = (r2 & 0xffff) + (r2 >> 0x10);
    return (u16) (t0 + (t0 >> 0x10));
}

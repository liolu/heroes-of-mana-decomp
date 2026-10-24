#include "m2c.h"
void GetHpOrResourceAndMax(s32, s32 *, s32 *);
void func_ov097_020d02b8(s32 *out_a, s32 *out_b) {
    s32 b[6];
    s32 a[6];
    s32 i;
    s32 sa  = 0;
    s32 sb  = 0;
    s32 *pa = a;
    s32 *pb = b;
    for (i = 0; i < 6; i++) {
        GetHpOrResourceAndMax(i + 0xf04, pb, pa);
        sa += a[i];
        sb += b[i];
        pa++;
        pb++;
    }
    *out_a = sa;
    *out_b = sb;
}

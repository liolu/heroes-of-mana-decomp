/* compiler: 1.2/sp3 */
/* near start: 20 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern void func_02020d04(void *, void *, s32, s32);
extern void func_ov123_0208608c(void *, s32, void *);
extern void func_ov123_0207e68c(void *, s32, s32);
extern u8 data_ov123_020db248;
extern u8 data_ov123_020db258;
extern u8 data_ov123_020db268;
extern u8 data_ov123_020db274;
extern u8 data_ov123_020db284;

s32 func_ov123_020860b8(void *ctx, s8 *str, s32 *pos, s8 *out1, s8 *out2) {
    s32 c;
    s32 n;
    s8 *p;
    s32 m;

    if (str == 0) {
        func_02020d04(&data_ov123_020db248, &data_ov123_020db258, 0, 0x199);
    }
    if (out1 == 0) {
        func_02020d04(&data_ov123_020db268, &data_ov123_020db258, 0, 0x19A);
    }
    if (out2 == 0) {
        func_02020d04(&data_ov123_020db274, &data_ov123_020db258, 0, 0x19B);
    }
    p = str + *pos;
    if (*p != 0x5C) {
        func_ov123_0208608c(ctx, 1, &data_ov123_020db284);
        func_ov123_0207e68c(ctx, 3, 1);
        return 3;
    }
    c   = p[1];
    str = p + 2;
    n   = 0;
    while (c != 0x5C) {
        if (c == 0) {
            func_ov123_0208608c(ctx, 1, &data_ov123_020db284);
            func_ov123_0207e68c(ctx, 3, 1);
            return 3;
        }
        if (n == 0x1FF) {
            func_ov123_0208608c(ctx, 1, &data_ov123_020db284);
            func_ov123_0207e68c(ctx, 3, 1);
            return 3;
        }
        *out1++ = c;
        c       = *str++;
        n++;
    }
    *out1 = 0;
    m     = 0;
    while ((c = *str++) != 0x5C && c != 0) {
        if (m == 0x1FF) {
            func_ov123_0208608c(ctx, 1, &data_ov123_020db284);
            func_ov123_0207e68c(ctx, 3, 1);
            return 3;
        }
        *out2++ = c;
        m++;
    }
    *out2 = 0;
    *pos  = *pos + (str - p - 1);
    return 0;
}

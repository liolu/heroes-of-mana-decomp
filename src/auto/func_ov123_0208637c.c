/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_02020d04(u8 *, u8 *, s32, s32);
s32 func_02024c28(s8 *);
s8 *func_02024f10(s32, s8 *);
extern u8 data_ov123_020db258;
extern u8 data_ov123_020db268;
extern u8 data_ov123_020db274;
extern u8 data_ov123_020db310;
extern u8 data_ov123_020db320;

s32 func_ov123_0208637c(s32 a, s8 *key, s8 *out, s32 n) {
    s8 first;
    s8 *p;
    s32 i;
    s8 c;
    s32 lim;
    if (a == 0) {
        func_02020d04(&data_ov123_020db310, &data_ov123_020db258, 0, 0x10D);
    }
    if (key == NULL) {
        func_02020d04(&data_ov123_020db268, &data_ov123_020db258, 0, 0x10E);
    }
    if (out == NULL) {
        func_02020d04(&data_ov123_020db274, &data_ov123_020db258, 0, 0x10F);
    }
    if (n <= 0) {
        func_02020d04(&data_ov123_020db320, &data_ov123_020db258, 0, 0x110);
    }
    first = *key;
    p     = func_02024f10(a, key);
    if (p == NULL) {
        return 0;
    }
    p   = p + func_02024c28(key);
    i   = 0;
    lim = n - 1;
    while (i < lim && (c = p[i]) != 0 && c != first) {
        out[i] = c;
        i++;
    }
    out[i] = 0;
    return 1;
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 func_ov123_0207b0c4(u8 *p);
extern s32 func_ov123_0207add8(u8 *p, u8 *buf, s32 max, s32 zero, u32 *pa, u32 *pn);
extern void func_ov123_0208c36c(u8 *o, u8 *buf, u32 idx, u32 *pa);
extern u8 data_ov123_020e154c[];

void func_ov123_0208d650(u8 *o) {
    u32 a[2];
    u32 n = 8;
    s32 r;

    if (*(u32 *) (o + 0xc4) == 0) {
        return;
    }
    if (func_ov123_0207b0c4(*(u8 **) o) == 0) {
        return;
    }
    do {
        r = func_ov123_0207add8(*(u8 **) o, data_ov123_020e154c, 0xff, 0, &a[0], &n);
        if (r != -1) {
            data_ov123_020e154c[r] = 0;
            func_ov123_0208c36c(o, data_ov123_020e154c, r, &a[0]);
        }
    } while (func_ov123_0207b0c4(*(u8 **) o) != 0);
}

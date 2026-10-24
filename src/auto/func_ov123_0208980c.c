/* compiler: 1.2/sp3 */
#include "m2c.h"
void *func_ov123_0207a194(s32, s32);
s32 func_ov123_0207a204(s32);
s32 func_ov123_02088924(void *, void *);
s32 func_ov123_0208a4c8(void *);
s32 func_ov123_0208a570(u16, s32);
s32 func_ov123_0208a594(void *, s32);
s32 func_ov123_0208980c(u8 *arg0, void *arg1, s32 arg2) {
    s32 r9;
    s32 r8;
    s32 n;
    s32 i;
    u8 *p;
    r9 = func_ov123_0208a594(arg1, 0);
    if (arg2 == 2) {
        r8 = r9;
    } else if (arg2 == 4) {
        r8 = func_ov123_0208a594(arg1, 2);
    } else {
        if (func_ov123_0208a4c8(arg0) != 0) {
            return 1;
        }
        return 0;
    }
    n = func_ov123_0207a204(*(s32 *) (arg0 + 0x60));
    for (i = 0; i < n; i++) {
        p = func_ov123_0207a194(*(s32 *) (arg0 + 0x60), i);
        if (func_ov123_0208a570(*(u16 *) (p + 8), r9) >= 0 && func_ov123_0208a570(*(u16 *) (p + 8), r8) <= 0 &&
            func_ov123_02088924(arg0, p) == 0) {
            return 0;
        }
    }
    return 1;
}

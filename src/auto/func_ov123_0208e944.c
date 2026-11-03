/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 __ctype_mapC[];
extern u8 data_ov123_020dbd74[];

s32 func_02024d8c(void *, void *);
s32 func_ov123_0208e4d8(void *);
u8 *func_ov123_0208e9d8(void *, void *, s32);
s32 func_02026c4c(u8 *);

s32 func_ov123_0208e944(void *arg0, void *arg1, s32 arg2) {
    u8 *p;
    s32 c;
    s32 f;

    if (func_02024d8c(arg1, data_ov123_020dbd74) == 0) {
        return func_ov123_0208e4d8(arg0);
    }
    p = func_ov123_0208e9d8(arg0, arg1, 0);
    if (p == NULL) {
        goto ret2;
    }
    c = p[0];
    if (c < 0 || c >= 0x80) {
        f = 0;
    } else {
        f = *(u16 *) (__ctype_mapC + c * 2) & 8;
    }
    if (f != 0) {
        goto do_call;
    }
ret2:
    return arg2;
do_call:
    return func_02026c4c(p);
}

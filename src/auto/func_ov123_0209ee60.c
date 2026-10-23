/* compiler: 1.2/sp3 */
#include "m2c.h"
u8 *func_ov123_0209d368(void);
s32 func_ov123_020a1b40(s32, s32, s32, s32, s32 *, s32);
s32 func_ov123_020a04a8(s32);
s32 func_ov123_0209e464(s32, s32);
s32 func_ov123_0209ac2c(s32);
s32 func_ov123_0209ee60(s32 mask) {
    s32 arrB[32];
    s32 arrA[32];
    s32 cntB;
    s32 cntA;
    s32 i;
    s32 k;
    u8 *p;
    cntB = 0;
    cntA = 0;
    i    = 1;
    for (; i <= func_ov123_0209d368()[0xd]; i++) {
        p = func_ov123_0209d368();
        if ((mask & (1 << p[i + 0x2d0])) != 0) {
            arrA[cntA] = ((s32 *) (func_ov123_0209d368() + 0xf4))[i];
            cntA++;
        } else {
            arrB[cntB] = ((s32 *) (func_ov123_0209d368() + 0xf4))[i];
            cntB++;
        }
    }
    for (k = 0; k < cntA; k++) {
        if (func_ov123_020a04a8(func_ov123_020a1b40(0x10, arrA[k], 0, 0, arrB, cntB)) != 0) {
            return 0;
        }
    }
    func_ov123_0209d368()[0x1a8] = 2;
    for (k = 0; k < cntB; k++) {
        s32 r = func_ov123_0209e464(arrB[k], 0);
        if (r != 0xff) {
            func_ov123_0209ac2c(r);
        }
    }
    func_ov123_0209d368()[0x1a8] = 0;
    return 1;
}

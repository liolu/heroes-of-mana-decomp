/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_0200fa98();
extern void func_0200faac(s32);
extern s32 func_0202d478(s32, s32);
extern M2C_UNK OSi_ThreadInfo;
extern M2C_UNK data_ov123_020e0a14;
s32 func_ov123_02072308(s32 arg0) {
    s32 n;
    s32 a, b;
    s32 old;
    s32 lim;
    void *p;
    p   = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    old = func_0200fa98();
    if (p != NULL) {
        if ((a = M2C_FIELD(p, u16 *, 0x2E)) != 0 && (b = M2C_FIELD(p, u16 *, 0x2C)) != 0) {
            lim = M2C_FIELD(&data_ov123_020e0a14, s32 *, 0x24);
            if (a > b) {
                a = b;
            }
            if (a > lim) {
                a = lim;
            }
            n = a * 2;
        } else {
            n = M2C_FIELD(&data_ov123_020e0a14, s32 *, 0x24) * 2;
        }
    } else {
        n = M2C_FIELD(&data_ov123_020e0a14, s32 *, 0x24) * 2;
    }
    func_0200faac(old);
    if (n > 0) {
        s32 t = func_0202d478(arg0, n);
        if (t > 0) {
            return n * t;
        }
    }
    return arg0;
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0206e918(void *arg0, void *arg1, void *arg2) {
    s32 ret = 0;
    s32 c1  = 0;
    s32 c2  = 0;
    s32 c0  = 0;
    u8 type = M2C_FIELD(arg2, u8 *, 8);
    u16 a;
    u16 b;
    u16 c;
    u16 d;
    if (!(type == 0xA || type == 0xB)) {
        c0 = 1;
    }
    if (c0 != 0) {
        a = M2C_FIELD(arg1, u16 *, 2);
        if (M2C_FIELD(arg2, u16 *, 0xA) == (u16) (((s32) a >> 8) | (a << 8))) {
            c2 = 1;
        }
    }
    if (c2 != 0) {
        b = M2C_FIELD(arg1, u16 *, 0);
        if (M2C_FIELD(arg2, u16 *, 0x18) == (u16) (((s32) b >> 8) | (b << 8))) {
            c1 = 1;
        }
    }
    if (c1 != 0) {
        c = M2C_FIELD(arg0, u16 *, 0xC);
        d = M2C_FIELD(arg0, u16 *, 0xE);
        if (M2C_FIELD(arg2, s32 *, 0x1C) ==
            (((u16) (((s32) c >> 8) | (c << 8)) << 0x10) | (u16) (((s32) d >> 8) | (d << 8)))) {
            ret = 1;
        }
    }
    return ret;
}

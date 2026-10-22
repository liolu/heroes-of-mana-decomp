/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_02092780(void *arg0) {
    s32 r;
    u8 t = M2C_FIELD(arg0, u8 *, 0x16);
    if (t < 10) {
        u8 k = M2C_FIELD(arg0, u8 *, 0x14);
        if (k == 3) {
            r = 0xFFFF3864 - M2C_FIELD(arg0, u8 *, 0x15);
        } else if (k == 4) {
            r = -0xC800 - M2C_FIELD(arg0, u8 *, 0x15);
        } else {
            r = 0xFFFF379C - M2C_FIELD(arg0, u8 *, 0x15);
        }
    } else if (t < 13) {
        r = 0xFFFF34E0 - M2C_FIELD(arg0, u8 *, 0x15);
    } else {
        s32 v = M2C_FIELD(arg0, s32 *, 0x10);
        r     = v;
        if (v == 0) {
            r = 0xFFFF3CB0 - M2C_FIELD(arg0, u8 *, 0x15);
        } else if (v == -1) {
            r = 0xFFFF347C - M2C_FIELD(arg0, u8 *, 0x15);
        } else if (v == -2) {
            r = 0xFFFF3418 - M2C_FIELD(arg0, u8 *, 0x15);
        } else if (v == -3) {
            r = 0xFFFF33B4 - M2C_FIELD(arg0, u8 *, 0x15);
        } else if (v == -4) {
            r = 0xFFFF30F8 - M2C_FIELD(arg0, u8 *, 0x15);
        } else if (v == -5) {
            r = 0xFFFF3094 - M2C_FIELD(arg0, u8 *, 0x15);
        } else if (v == -6) {
            r = 0xFFFF3030 - M2C_FIELD(arg0, u8 *, 0x15);
        }
    }
    return r;
}

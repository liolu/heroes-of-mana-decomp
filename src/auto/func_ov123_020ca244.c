/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020ca244(s32 arg0, s32 arg1, u16 *arg2) {
    u16 w0;
    u16 w1;
    u16 w2;
    u16 w3;
    if (arg0 == 1) {
        if (arg1 == 0) {
            w0                  = arg2[0];
            w2                  = arg2[2];
            w1                  = arg2[1];
            w3                  = arg2[3];
            *(s16 *) 0x04001040 = ((w0 << 8) & 0xFF00) | (u8) w2;
            *(s16 *) 0x04001044 = ((w1 << 8) & 0xFF00) | (u8) w3;
            return;
        }
        w0                  = arg2[0];
        w2                  = arg2[2];
        w1                  = arg2[1];
        w3                  = arg2[3];
        *(s16 *) 0x04001042 = ((w0 << 8) & 0xFF00) | (u8) w2;
        *(s16 *) 0x04001046 = ((w1 << 8) & 0xFF00) | (u8) w3;
        return;
    }
    if (arg1 == 0) {
        w0                  = arg2[0];
        w2                  = arg2[2];
        w1                  = arg2[1];
        w3                  = arg2[3];
        *(s16 *) 0x04000040 = ((w0 << 8) & 0xFF00) | (u8) w2;
        *(s16 *) 0x04000044 = ((w1 << 8) & 0xFF00) | (u8) w3;
        return;
    }
    w0                  = arg2[0];
    w2                  = arg2[2];
    w1                  = arg2[1];
    w3                  = arg2[3];
    *(s16 *) 0x04000042 = ((w0 << 8) & 0xFF00) | (u8) w2;
    *(s16 *) 0x04000046 = ((w1 << 8) & 0xFF00) | (u8) w3;
}

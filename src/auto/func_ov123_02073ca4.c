/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_020720f4(s32, s32, s32, u16 *, u32 *, s32); /* extern */

s32 func_ov123_02073ca4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4) {
    u32 spC;
    u16 sp8;
    s32 r;

    r = func_ov123_020720f4(arg0, arg1, arg2, &sp8, &spC, arg3);
    if (r < 0) {
        return r;
    }
    if (arg4 == NULL) {
        return r;
    }
    M2C_FIELD(arg4, s16 *, 2) = (s16) ((u8) ((s32) sp8 >> 8) | ((sp8 << 8) & 0xFF00));
    M2C_FIELD(arg4, s32 *, 4) = (s32) (((spC << 0x18) & 0xFF000000) | (((spC << 8) & 0xFF0000) | ((u8) (spC >> 0x18) | ((spC >> 8) & 0xFF00))));
    return r;
}

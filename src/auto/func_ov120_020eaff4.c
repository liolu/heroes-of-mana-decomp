#include "m2c.h"

extern u8 data_ov120_020f19cc[];

s32 func_ov120_020eaff4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 a4;
    s32 a5;
    u8 *e;
    s32 i;
    s32 f;
    s32 x0;
    s32 xe;
    s32 y0;
    s32 ye;

    a4 = arg4;
    a5 = arg5;
    i  = arg2;
    if (i < arg3) {
        e = data_ov120_020f19cc + i * 12;
        do {
            f  = *(u16 *) (e + 6);
            x0 = *(u16 *) e;
            xe = x0 + e[4];
            y0 = *(u16 *) (e + 2);
            ye = y0 + e[5];
            if ((a4 == f) && (a5 & *(u16 *) (e + 8)) && (arg0 > x0) && (arg0 < xe) && (arg1 > y0) && (arg1 < ye)) {
                return *(u16 *) (data_ov120_020f19cc + 0xA + i * 12);
            }
            i += 1;
            e += 12;
        } while (i < arg3);
    }
    return -1;
}

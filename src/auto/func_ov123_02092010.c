#include "m2c.h"
u8 *func_ov123_020913d8(s32);
void func_ov123_02091e88(s32);
void func_ov123_02092010(s32 *m) {
    u8 *o = func_ov123_020913d8(0x10);
    if (*(s16 *) m == 5) {
        if (*(s16 *) ((u8 *) m + 2) == 0) {
            return;
        }
        switch (m[2]) {
            case 0xd:
                o[0xd14] = 1;
                break;
            case 0xf:
                o[0xd14] = 2;
                break;
            case 0x11:
                o[0xd14] = 3;
                break;
            default:
                o[0xd14] = 4;
                break;
        }
    } else if (*(s16 *) m == 7) {
        func_ov123_02091e88(m[1]);
    }
}

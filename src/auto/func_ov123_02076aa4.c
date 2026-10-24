/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_ov123_02076ba4(void *, s32);
s32 func_ov123_02077410(void *, void *);
void func_ov123_02077840(void *, void *);
void func_ov123_020778b4(void *, s32, s32);
void func_ov123_02077974(void *);
void func_ov123_02077e80(void *, void *);
void func_ov123_02077ef4(void *, s32, s32);
void func_ov123_02077fb4(void *);
s32 func_ov123_02076aa4(u8 *arg0) {
    s32 flags;
    s32 t;
    s32 u;
    void *p;
    if (arg0[0x5AF] != 0) {
        flags = 0;
    } else {
        flags = 0x8000;
    }
    if (*(s32 *) (arg0 + 0x45C) == -1) {
        return flags | 4;
    }
    t = *(s32 *) (arg0 + 0x458);
    switch (t) {
        case 3:
            p = arg0 + 0x3FC;
            func_ov123_02077974(p);
            func_ov123_020778b4(p, *(s32 *) (arg0 + 0x460), *(s32 *) (arg0 + 0x464) - *(s32 *) (arg0 + 0x460));
            func_ov123_02077840(p, arg0 + 0x468);
            *(s32 *) (arg0 + 0x47C) = 0x10;
            break;
        case 4:
            p = arg0 + 0x348;
            func_ov123_02077fb4(p);
            func_ov123_02077ef4(p, *(s32 *) (arg0 + 0x460), *(s32 *) (arg0 + 0x464) - *(s32 *) (arg0 + 0x460));
            func_ov123_02077e80(p, arg0 + 0x468);
            *(s32 *) (arg0 + 0x47C) = 0x14;
            break;
        default:
            return flags | 3;
    }
    u = func_ov123_02077410(arg0, arg0 + 0x5B0);
    if (u == 0) {
        return flags | 1;
    }
    return flags | func_ov123_02076ba4(arg0, u);
}

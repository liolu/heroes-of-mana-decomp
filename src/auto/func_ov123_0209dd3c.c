/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_02099524(s32, s32);
s32 func_ov123_0209ab40(void);
void func_ov123_0209bce0(s32, s32);
void func_ov123_0209cfac(s32, s32);
void func_ov123_020a2fe4(s32, s32);
u32 func_ov123_0209dd3c(u32 arg0) {
    s32 b;
    s32 a;
    if (arg0 == 0) {
        return 0U;
    }
    switch (arg0) {
        case 1:
            a = 6;
            b = -0x32;
            break;
        case 2:
            a = 6;
            b = -0x3C;
            break;
        case 3:
            a = 6;
            b = -0x1E;
            break;
        case 4:
            a = 6;
            b = -0x50;
            break;
        case 5:
            a = 6;
            b = -0x14;
            break;
    }
    switch (func_ov123_0209ab40()) {
        case 2:
            func_ov123_0209bce0(a, b - 0xFA00);
            break;
        case 4:
            func_ov123_0209cfac(a, b - 0x12110);
            break;
        case 5:
            func_ov123_020a2fe4(a, b - 0x14820);
            break;
        default:
            func_ov123_02099524(a, b - 0x16F30);
            break;
    }
    return arg0;
}

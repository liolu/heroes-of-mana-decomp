/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov123_020df180;

s32 func_0200fa98(void);
void func_0200faac(s32);
void MI_CpuFill8(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);
void func_ov123_02067bbc(void *);
s32 WM_SetLifeTime(void *, s32, s32, s32, s32);
void func_ov123_020676ac(s32);
void func_ov123_020671dc(void);

s32 func_ov123_02068034(u8 *a, u8 *b, void *cb) {
    s32 old, r;

    old = func_0200fa98();
    if (data_ov123_020df180 == NULL) {
        func_0200faac(old);
        return 1;
    }
    switch (*(s32 *) (data_ov123_020df180 + 0x2260)) {
        case 3:
            if (a == NULL) {
                func_0200faac(old);
                return 1;
            }
            if (*(u16 *) (a + 0x3c) != 0) {
                func_0200faac(old);
                return 1;
            }
            if (b != NULL) {
                if (b[0] >= 4 || b[1] >= 4) {
                    func_0200faac(old);
                    return 1;
                }
                data_ov123_020df180[0x2250] = b[0];
                data_ov123_020df180[0x2251] = b[1];
                if (data_ov123_020df180[0x2250] == 0) {
                    MI_CpuFill8(data_ov123_020df180 + 0x2200, 0, 0x50);
                } else {
                    MI_CpuCopy8(b + 2, data_ov123_020df180 + 0x2200, 0x50);
                }
            } else {
                MI_CpuFill8(data_ov123_020df180 + 0x2200, 0, 0x52);
            }
            MI_CpuCopy8(a, data_ov123_020df180 + 0x2140, 0xc0);
            *(u16 *) (data_ov123_020df180 + 0x2170) = *(u16 *) (data_ov123_020df180 + 0x216e) | 3;
            func_ov123_02067bbc(cb);
            break;
        case 8:
            func_0200faac(old);
            return 2;
        case 9:
            func_0200faac(old);
            return 0;
        default:
            func_0200faac(old);
            return 1;
    }
    r = WM_SetLifeTime(func_ov123_020671dc, 0xffff, 0x50, 0xffff, 0xffff);
    switch (r) {
        case 2:
            func_ov123_020676ac(8);
            *(u16 *) (data_ov123_020df180 + 0x2280) = 5;
            break;
        case 8:
            func_0200faac(old);
            return 4;
        case 3:
        default:
            func_ov123_020676ac(0xb);
            func_0200faac(old);
            return 7;
    }
    func_0200faac(old);
    return 3;
}

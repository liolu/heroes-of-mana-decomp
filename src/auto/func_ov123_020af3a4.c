#include "m2c.h"

extern s32 func_ov123_020c8f80(s32, s32);
extern void func_ov123_020c9324(s32, s32, s32);
extern void func_ov123_020c8cb8(s32, s32, s32);
extern void func_ov123_020c8d2c(s32, s32, u16, u16);
extern u8 *data_ov123_020e45bc;
extern u8 data_ov123_020d7b30[];

void func_ov123_020af3a4(void) {
    u8 *p;
    s32 r4;
    s32 idx;
    s32 t;
    s32 ip;

    p   = data_ov123_020e45bc;
    idx = *(s8 *) (p + 0x121) - 0x2F;
    switch (idx) {
        case 0:
            r4 = 0x42;
            break;
        case 1:
            r4 = 0x41;
            break;
        case 2:
            r4 = 0x43;
            break;
        case 3:
            r4 = 0x41;
            break;
        case 4:
        case 5:
            r4 = 0x45;
            break;
        default:
            r4 = 0x40;
            break;
    }
    t = func_ov123_020c8f80(*(s32 *) (p + 0x114), 0);
    func_ov123_020c9324(0, r4, t);
    func_ov123_020c8cb8(*(s32 *) (data_ov123_020e45bc + 0x114), -1, 2);
    p  = data_ov123_020e45bc;
    ip = *(s8 *) (p + 0x121) * 4;
    func_ov123_020c8d2c(*(s32 *) (p + 0x114), -1, *(u16 *) (data_ov123_020d7b30 + ip),
                        *(u16 *) (data_ov123_020d7b30 + 2 + ip));
}

#include "m2c.h"

typedef struct S140 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    u8 b1C;
    u8 b1D;
    u8 b1E;
    u8 b1F;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2C;
    s32 f30;
    s32 f34;
    s32 f38;
    s32 f3C;
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    s32 f58;
} S140;

extern S140 *data_ov123_020e18dc;

void func_ov123_0209d140(S140 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    data_ov123_020e18dc     = arg0;
    arg0->f0                = 0;
    data_ov123_020e18dc->f4 = arg1;
    data_ov123_020e18dc->f8 = 0;
    {
        S140 *p = data_ov123_020e18dc;
        p->fC   = 0;
        p->f10  = 0;
        p->f14  = arg4;
    }
    data_ov123_020e18dc->f18 = arg3;
    data_ov123_020e18dc->b1C = 0;
    data_ov123_020e18dc->b1D = 0;
    data_ov123_020e18dc->b1E = 0;
    data_ov123_020e18dc->b1F = 0;
    data_ov123_020e18dc->f20 = 0;
    data_ov123_020e18dc->f24 = 0;
    data_ov123_020e18dc->f28 = arg2;
    data_ov123_020e18dc->f2C = 0;
    data_ov123_020e18dc->f30 = 0;
    data_ov123_020e18dc->f34 = 0;
    data_ov123_020e18dc->f38 = 0;
    data_ov123_020e18dc->f3C = 0;
    data_ov123_020e18dc->f40 = 0;
    data_ov123_020e18dc->f44 = 0;
    data_ov123_020e18dc->f48 = 0;
    data_ov123_020e18dc->f4C = 0;
    data_ov123_020e18dc->f50 = 0;
    data_ov123_020e18dc->f54 = 0;
    data_ov123_020e18dc->f58 = 0;
}

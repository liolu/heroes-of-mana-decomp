/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Slot {
    s32 h;
    s16 f4;
    s16 f6;
    s8 f8;
    u8 f9;
    u8 pad[2];
} Slot;

extern u8 data_ov123_020d844c[];
extern Slot *data_ov123_020e4720;
extern u8 func_ov123_020c9608;
void G2x_SetBlendBrightness_(s32, s32, s32);
s32 func_ov123_020cb6ac(s32, void *, void *, s32);

s32 func_ov123_020c9740(s8 arg0, s32 arg1, s32 arg2, s16 arg3) {
    u8 sp[4];
    Slot *p;
    sp[0] = data_ov123_020d844c[0];
    sp[1] = data_ov123_020d844c[1];
    sp[2] = data_ov123_020d844c[2];
    sp[3] = data_ov123_020d844c[3];
    if (arg1 == 1) {
        p = data_ov123_020e4720;
    } else {
        p = data_ov123_020e4720 + 1;
    }
    if (p->f9 != 0) {
        return 0;
    }
    if (arg1 == 1) {
        G2x_SetBlendBrightness_(0x04001050, arg2, (s8) sp[arg0]);
    } else {
        G2x_SetBlendBrightness_(0x04000050, arg2, (s8) sp[arg0]);
    }
    p->h  = func_ov123_020cb6ac(1, &func_ov123_020c9608, p, 0xC8);
    p->f4 = 0;
    p->f8 = arg0;
    p->f6 = arg3;
    p->f9 = 1;
    return 1;
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct W {
    u32 lo : 8;
    u32 mid : 8;
    u32 hi : 9;
    u32 top : 7;
} W;
typedef struct H {
    u16 a : 10;
    u16 b : 2;
    u16 c : 4;
} H;
typedef struct O {
    W *w;
    s32 pad;
    s8 s8v;
} O;
typedef struct P {
    u16 a;
    u16 b;
} P;
extern P data_ov123_020d7a00;
extern u8 data_ov123_020d7a04[];
extern O *data_ov123_020e45b8;
s32 WM_GetAllowedChannel(void);
s32 WM_GetLinkLevel(void);
void func_ov123_020c9324(s32, u8, W *);

void func_ov123_020ae9d0(void) {
    u16 ime;
    s32 lvl                      = 0;
    ime                          = *(volatile u16 *) 0x04000208;
    *(volatile u16 *) 0x04000208 = 0;
    if (WM_GetAllowedChannel() != 0x8000) {
        lvl = WM_GetLinkLevel();
    }
    (void) *(volatile u16 *) 0x04000208;
    *(volatile u16 *) 0x04000208 = ime;
    func_ov123_020c9324(0, *(u8 *) (lvl + (s32) (data_ov123_020d7a04 + data_ov123_020e45b8->s8v * 4)), data_ov123_020e45b8->w);
    {
        u32 *wp = (u32 *) data_ov123_020e45b8->w;
        *wp     = (*wp & 0xFE00FF00) | (u8) data_ov123_020d7a00.b | ((data_ov123_020d7a00.a & 0x1FF) << 16);
    }
    ((H *) ((u8 *) data_ov123_020e45b8->w + 4))->b = 2;
}

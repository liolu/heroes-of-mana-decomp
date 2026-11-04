/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x118];
    u32 a : 2;
    u32 b : 5;
    u32 c : 5;
    u32 d : 12;
    u32 e : 8;
    u32 f0 : 12;
    u32 f8 : 20;
    s8 s120[4];
    s8 s124;
    u8 b125;
    u16 h126;
    u16 h128;
} Gs;

typedef struct {
    u8 pad[0x154];
    u16 h154;
} Hs;

extern Gs *data_ov000_02051548;
extern Hs *data_ov000_0205154c;
typedef struct {
    u16 b0 : 1;
    u16 rest : 15;
} Fl;
extern Fl *data_ov000_02051550;
void func_0200acd8(s32, s32, s32, s32, s32);

void SetScreenRGB_AengineOn(void) {
    u16 *p;
    s32 i;
    u16 j;
    u32 *r;
    s32 n;
    if (data_ov000_02051548->a != 0) {
        return;
    }
    data_ov000_02051548->a      = 1;
    data_ov000_02051548->h126   = 0;
    data_ov000_02051548->s124   = 0;
    data_ov000_02051548->b      = 0x1F;
    data_ov000_02051548->d      = 0;
    data_ov000_02051548->f0     = 0;
    data_ov000_02051548->h128   = 0;
    data_ov000_02051548->b125   = 0;
    data_ov000_02051548->c      = 0x1F;
    *(volatile u16 *) 0x400000C = (*(volatile u16 *) 0x400000C & 0x43) | 0x600;
    *(volatile u16 *) 0x400000C = *(volatile u16 *) 0x400000C & ~3;
    *(volatile u16 *) 0x400000C = *(volatile u16 *) 0x400000C & ~0x40;
    {
        u8 *pal               = (u8 *) 0x5000000;
        u8 *vr                = (u8 *) 0x6000000;
        *(u16 *) (pal + 0x22) = data_ov000_02051548->h126;
        p                     = (u16 *) (vr + 0x2FE0);
    }
    for (i = 0; i < 16; i++) {
        *p++ = 0x1111;
    }
    {
        s32 k;
        p = (u16 *) 0x6003000;
        for (k = 0; k < 0x400; k++) {
            *p++ = 0x117F;
        }
    }
    func_0200acd8(0x4000050, 5, 0x31, data_ov000_02051548->s124, data_ov000_02051548->b);
    data_ov000_0205154c->h154 |= 4;
    *(volatile u32 *) 0x4000000 = (*(volatile u32 *) 0x4000000 & ~0x1F00) | (data_ov000_0205154c->h154 << 8);
    if (data_ov000_02051550->b0) {
        for (j = 0; j < 0x41; j = j + 1) {
            n = j + 0x17F;
            r = (u32 *) ((u8 *) data_ov000_02051550 + (n >> 5) * 4);
            r[2] |= 1 << (n & 0x1F);
        }
    }
}

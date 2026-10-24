/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Ico {
    u8 p0[8];
    s8 f8;
    s8 f9;
    u8 pa[0x3e - 0xa];
    u8 f3e;
} Ico;

extern Ico *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

typedef struct G1 {
    u8 p0[0x20];
    u32 f20;
    u8 p24[0x12c - 0x24];
    s32 f12c;
    u8 p130[0x398 - 0x130];
    u8 f398[0x400];
} G1;
extern G1 *data_ov000_02051548;

typedef struct G2 {
    u8 p0[0x18];
    s32 f18;
    u8 p1c[0x40 - 0x1c];
    u8 f40[0x30c];
    u8 f34c;
} G2;
extern G2 *data_ov109_020ea340;
extern u8 *data_ov000_0205154c;

Ico *PutTutorialIcon(s32 arg0, s32 arg1) {
    Ico *r;
    s32 icon;

    if (((u32) (data_ov000_02051548->f20 << 0x13) >> 0x1F) != 0) {
        icon = 0x41;
        if (arg1 > 0xA8) {
            icon = 0x34;
        }
        r = SetStatusIcon(0xFF02, icon, arg0, arg1, data_ov109_020ea340->f34c, 0, 0, (s32) ((u8 *) data_ov109_020ea340 + 0x40),
                          data_ov109_020ea340->f18, 0);
        r->f8 = 8;
        r->f9 = 8;
    } else {
        icon = 0x44;
        if (arg1 > 0xA8) {
            icon = 0x43;
        }
        r = SetStatusIcon(0xFFBD, icon, arg0, arg1, *(u16 *) (data_ov000_0205154c + 0x56c), 0, 0,
                          (s32) ((u8 *) data_ov000_02051548 + 0x798), data_ov000_02051548->f12c, 0);
        r->f3e |= 0x80;
        r->f8 = 8;
        r->f9 = 8;
    }
    return r;
}

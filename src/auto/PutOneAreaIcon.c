/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad0 : 5;
    u32 g : 5;
    u32 h : 10;
    u32 pad1 : 12;
} IconW;

typedef struct {
    u8 pad0[8];
    u8 b8;
    u8 b9;
    u8 pad1[2];
    IconW w;
    u8 pad2[0x72 - 0x10];
    u16 w72;
    u8 pad3[0x78 - 0x74];
    void *w78;
} Icon;

typedef struct {
    u8 pad0[8];
    u32 pad8a : 23;
    u32 kind : 4;
    u32 pad8b : 5;
    u8 pad1[0x2C - 0xC];
    u16 f2c : 1;
    u16 f2cr : 15;
    u8 pad2[0x38 - 0x2E];
    u8 b38;
    u8 pad3[0x40 - 0x39];
    s32 x;
    u8 pad4[4];
    s32 y;
    u8 pad5[0x7C - 0x4C];
    Icon *icon;
    u8 b80;
    u8 b81;
    u8 b82;
    u8 pad6[0xD8 - 0x83];
    u16 wd8;
} Unit;

typedef struct {
    u32 pad0 : 28;
    u32 flag : 1;
    u32 pad1 : 3;
} GW;

typedef struct {
    u8 pad0[0x10];
    GW w10;
    u8 pad1[0x134 - 0x14];
    s32 w134;
} G;

extern void releaseUnitIconWorkOne(void);
extern void ChangeXYtoAreaMapScreenXY2(s32 *, s32 *);
extern u8 GetAreaMapIcon(Unit *);
extern Icon *SetStatusIcon(s32, u8, s32, s32, s32, s32, s32, s32, s32, s32);
extern G *data_ov000_02051548;
extern u8 *data_ov000_0205154c;

void PutOneAreaIcon(Unit *u) {
    s32 x;
    s32 y;
    u16 t;

    releaseUnitIconWorkOne();
    x = u->x;
    y = u->y;
    ChangeXYtoAreaMapScreenXY2(&x, &y);
    u->b80 = GetAreaMapIcon(u);
    if (u->kind >= 4) {
        u->b81 = 3;
    } else {
        u32 f = u->f2c;
        if ((f != 0 && data_ov000_02051548->w10.flag == 0) || (f == 0 && data_ov000_02051548->w10.flag != 0)) {
            u->b81 = 3;
        } else {
            u->b81 = 2;
        }
    }
    t            = *(u16 *) (data_ov000_0205154c + 0xA1C);
    u->b82       = t;
    u->icon      = SetStatusIcon(0xFFB2, u->b80, x, y, t & 0xFF, u->b81, 0, (s32) data_ov000_02051548 + 0x78C,
                                 data_ov000_02051548->w134, 1);
    u->icon->w.g = 0xC;
    u->icon->w78 = &u->icon;
    u->icon->b8  = 4;
    u->icon->b9  = 4;
    u->icon->w72 = u->wd8;
    u->icon->w.h = u->b38;
}

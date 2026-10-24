/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Info {
    u8 pad0[4];
    u32 lo16 : 16;
    u32 f16 : 3;
    u32 mid : 13;
    u32 w8lo : 23;
    u32 f23 : 1;
    u32 w8hi : 8;
    u8 pad1[0x10 - 0xC];
    u16 h10;
} Info;
typedef struct Ship {
    u8 pad[0xA8];
    u16 px : 7;
    u16 py : 7;
    u16 mode : 2;
} Ship;
typedef struct Un {
    u32 act : 1;
    u32 pad : 31;
    u32 w4;
    u32 c : 23;
    u32 t : 4;
    u32 d : 5;
    u8 pad1[0x2C - 12];
    u16 side : 1;
    u16 pad2 : 15;
    u8 pad3[0x60 - 0x2E];
    s8 x;
    s8 y;
    u8 pad4[0x6C - 0x62];
    u32 w6c;
    u32 w70;
    u8 pad5[0x7C - 0x74];
    u32 w7c;
    u8 pad6[0xE8 - 0x80];
    Info *info;
    u32 *ec;
    u8 pad7[0x110 - 0xF0];
} Un;
typedef struct Hd {
    u8 pad0[0x14];
    u32 pa : 8;
    u32 k : 4;
    u32 pb : 20;
    u8 pad1[0x24 - 0x18];
    u32 pc : 8;
    u32 flag : 1;
    u32 pd : 23;
} Hd;
extern Hd *data_ov000_02051548;
extern Un data_ov003_020b0cf0[];
Ship *GetShipAooSt(s32);
s32 CheckCanTargetting(Un *);
s32 checkCanSeeUnitByUser(Un *);
s32 CheckAreaMapMaskForEnemy(s32, s32);
s32 FX_Sqrt(s32);

s32 is_thereEnemyInSite(Un *self, u32 side) {
    Un *p;
    s32 best;
    Ship *a;
    Ship *b;
    s32 i;
    s32 bestd;
    s32 s;
    Info *inf;
    s32 d;
    u32 t;
    s32 r;
    p     = data_ov003_020b0cf0;
    best  = -1;
    bestd = 0x2710000;
    if (data_ov000_02051548->flag != 0) {
        return best;
    }
    s = (side ^ 1) & 1;
    a = GetShipAooSt(s);
    b = GetShipAooSt(s + 2);
    for (i = 0; i < 0x42; i++, p++) {
        if (!p->act || p == self) {
            continue;
        }
        if (p->t < 4 && (side ^ p->side) == 0) {
            continue;
        }
        if (CheckCanTargetting(p) == 0 || (inf = p->info) == NULL) {
            continue;
        }
        if (inf->f23 != 0) {
            continue;
        }
        t = p->t;
        if (t >= 4) {
            switch (t) {
                case 4:
                    if (a != NULL && a->mode == 2 && a->px == p->x) {
                        if (a->py == p->y) {
                            goto common;
                        }
                    }
                    if (b != NULL && b->mode == 2 && b->px == p->x) {
                        if (b->py != p->y) {
                            continue;
                        }
                        goto common;
                    }
                    continue;
                case 5:
                case 6:
                    if (inf->h10 == 0) {
                        continue;
                    }
                    if (((*self->ec << 18) >> 28) != 7) {
                        continue;
                    }
                    if (self->info->f16 != 0) {
                        continue;
                    }
                    break;
                case 0:
                case 1:
                case 2:
                case 3:
                case 7:
                default:
                    continue;
            }
        }
    common:
        if (p->w7c == 0) {
            continue;
        }
        if (self->t == data_ov000_02051548->k || self->t == data_ov000_02051548->k + 2) {
            r = checkCanSeeUnitByUser(p);
        } else {
            r = CheckAreaMapMaskForEnemy(p->x, p->y);
        }
        if (r != 1) {
            continue;
        }
        d = FX_Sqrt(((p->x - self->x) * (p->x - self->x) + (p->y - self->y) * (p->y - self->y)) << 12);
        if ((p->w70 & self->w6c) == 0) {
            d += 0x64000;
        }
        if (bestd > d) {
            bestd = d;
            best  = i;
        }
    }
    return best;
}

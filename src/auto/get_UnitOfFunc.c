/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef struct Info {
    u8 pad[8];
    u32 w8lo : 23;
    u32 f23 : 1;
    u32 w8hi : 8;
    u8 padc[3];
    s8 f0f;
    u16 h10;
    u16 pad12;
    u16 h14;
} Info;
typedef struct Un {
    u32 act : 1;
    u32 pad : 31;
    u32 w4;
    u32 c : 23;
    u32 t : 4;
    u32 d : 5;
    u32 w0c : 8;
    u32 w0c_r : 24;
    u8 pad1[0x40 - 0x10];
    s32 f40;
    s32 f44;
    s32 f48;
    u8 pad2[0x60 - 0x4c];
    s8 x;
    s8 y;
    u8 pad4[0x6C - 0x62];
    u32 w6c;
    u32 w70;
    u8 pad5[0x7C - 0x74];
    u32 w7c;
    u8 pad6[0xE8 - 0x80];
    Info *info;
    u8 pad7[0x110 - 0xEC];
} Un;
typedef struct Hd {
    u8 pad0[0x14];
    u32 pa : 8;
    u32 k : 4;
    u32 pb : 20;
} Hd;
typedef struct Tb {
    u8 pad[0xC];
    u32 lo : 23;
    u32 hi : 9;
    u32 w10;
} Tb;
typedef struct Tp {
    u8 pad[8];
    Tb *tbl;
} Tp;

extern Hd *data_ov000_02051548;
extern Un data_ov003_020b0cf0[];
extern Tp *data_0203673c;
s32 checkCanSeeUnitByUser(Un *);
s32 CheckAreaMapMaskForEnemy(s32, s32);
s32 FX_Sqrt(s32);

s32 get_UnitOfFunc(Un *self, s32 a1, s32 mode, s32 (*fn)(Un *, s32)) {
    Un *p = data_ov003_020b0cf0;
    s32 i;
    s32 best = 0x2710000;
    s32 mx   = 0;
    s32 thr  = (self->w0c << 14) + 0x7000;
    s32 idx  = -1;

    for (i = 0; i < 0x42; i++, p++) {
        Info *inf;
        s32 r;
        s32 d;
        if (!(p->act && p->info != 0)) {
            continue;
        }
        if (p->info->f23 != 0) {
            continue;
        }
        if (fn(p, a1) == 0) {
            continue;
        }
        switch (mode) {
            case 0: {
                s32 a = ((p->f40 - self->f40) << 8) / 0x4000;
                s32 b = ((p->f44 - self->f44) << 8) / 0x4000;
                s32 c = ((p->f48 - self->f48) << 8) / 0x4000;
                d     = a * a;
                d += b * b;
                d += c * c;
                d = FX_Sqrt(d);
                if (d > thr) {
                    break;
                }
                if (best > d) {
                    best = d;
                    idx  = i;
                }
                break;
            }
            case 1:
                if (p->w7c == 0) {
                    break;
                }
                if (self->t == data_ov000_02051548->k || self->t == data_ov000_02051548->k + 2) {
                    r = checkCanSeeUnitByUser(p);
                } else {
                    r = CheckAreaMapMaskForEnemy(p->x, p->y);
                }
                if (r != 1) {
                    break;
                }
                d = FX_Sqrt(((p->x - self->x) * (p->x - self->x) + (p->y - self->y) * (p->y - self->y)) << 12);
                if ((p->w70 & self->w6c) == 0) {
                    d += 0x64000;
                }
                if (best > d) {
                    best = d;
                    idx  = i;
                }
                break;
            case 2:
                if (p->w7c == 0) {
                    break;
                }
                if (self->t == data_ov000_02051548->k || self->t == data_ov000_02051548->k + 2) {
                    r = checkCanSeeUnitByUser(p);
                } else {
                    r = CheckAreaMapMaskForEnemy(p->x, p->y);
                }
                if (r != 1) {
                    break;
                }
                d = p->info->h10;
                if (mx < d) {
                    mx  = d;
                    idx = i;
                }
                break;
            case 3:
                if (p->w7c == 0) {
                    break;
                }
                if (self->t == data_ov000_02051548->k || self->t == data_ov000_02051548->k + 2) {
                    r = checkCanSeeUnitByUser(p);
                } else {
                    r = CheckAreaMapMaskForEnemy(p->x, p->y);
                }
                if (r != 1) {
                    break;
                }
                d = p->info->h10;
                if (best > d) {
                    best = d;
                    idx  = i;
                }
                break;
            case 4:
                if (p->w7c == 0) {
                    break;
                }
                if (self->t == data_ov000_02051548->k || self->t == data_ov000_02051548->k + 2) {
                    r = checkCanSeeUnitByUser(p);
                } else {
                    r = CheckAreaMapMaskForEnemy(p->x, p->y);
                }
                if (r != 1) {
                    break;
                }
                inf = p->info;
                if (mx < inf->f0f + data_0203673c->tbl[inf->h14].hi) {
                    mx  = inf->f0f + data_0203673c->tbl[inf->h14].hi;
                    idx = i;
                }
                break;
            case 5:
                if (p->w7c == 0) {
                    break;
                }
                if (self->t == data_ov000_02051548->k || self->t == data_ov000_02051548->k + 2) {
                    r = checkCanSeeUnitByUser(p);
                } else {
                    r = CheckAreaMapMaskForEnemy(p->x, p->y);
                }
                if (r != 1) {
                    break;
                }
                inf = p->info;
                if (best > inf->f0f + data_0203673c->tbl[inf->h14].hi) {
                    best = inf->f0f + data_0203673c->tbl[inf->h14].hi;
                    idx  = i;
                }
                break;
        }
    }
    return idx;
}

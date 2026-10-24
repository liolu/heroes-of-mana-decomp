/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x10];
    u32 p10a : 18;
    u32 mapno : 8;
    u32 p10b : 6;
    u32 p14a : 8;
    u32 sel : 4;
    u32 p14b : 20;
    u8 pad1[0x8];
    u32 p20a : 12;
    u32 hide : 1;
    u32 p20b : 19;
    u8 pad2[0x108];
    u32 w12c;
} Gm;

typedef struct {
    u32 p0a : 2;
    u32 idx : 9;
    u32 p0b : 21;
    u32 f4a : 30;
    u32 f4b : 1;
    u32 f4c : 1;
} _Unused;

typedef struct {
    u32 p0a : 2;
    u32 idx : 9;
    u32 p0b : 21;
    u32 w4_lo : 5;
    u32 bit5 : 1;
    u32 w4_mid : 24;
    u32 bit30 : 1;
    u32 bit31 : 1;
    u8 pad[8];
    u16 h10;
    u8 pad2[0x22];
} Rec;

typedef struct {
    u8 pad0[8];
    u32 p8a : 10;
    u32 race : 4;
    u32 p8b : 18;
    u8 pad1[0x14];
} Cell;

typedef struct {
    u8 pad[0x264];
    u16 ids[0x25];
    u8 pad2[0x2D0 - 0x264 - 0x4A];
} MapE;

typedef struct {
    u8 pad[4];
    Cell *cells;
    u8 pad1[0x1C];
    Rec *recs;
    MapE *map;
} T;

typedef struct {
    u32 p0a : 3;
    u32 kind : 3;
    u32 p0b : 26;
    u8 pad[0xE8];
    u32 *ptr;
    u8 pad2[0x20];
} Ent;

typedef struct {
    u32 p0a : 10;
    u32 race : 4;
    u32 p0b : 18;
} W;

typedef struct {
    u8 pad0[8];
    s8 b8;
    s8 b9;
    s8 ba;
    s8 bb;
    u32 w;
    u8 pad1[0x2E];
    u8 b3e;
    u8 pad2[0x33];
    s16 h72;
} Icon;

typedef struct {
    u8 pad[0x56C];
    u16 h56c;
} Gm2;

void MIi_CpuClear16(u32, void *, u32);
Icon *SetStatusIcon(s32, u8, s32, s32, u16, s32, s32, void *, s32, s32);
void G2x_SetBlendBrightnessExt_(u32, s32, s32, s32, s32, s32);
extern Gm *data_ov000_02051548;
extern Gm2 *data_ov000_0205154c;
extern T *data_0203673c;
extern u8 data_ov003_020ab048[];
extern u8 data_ov003_020ab050[];
extern Ent data_ov003_020b0cf0[];

void PutUnitRaceIcon(void) {
    u32 flags[8];
    s32 i;
    s32 y;
    u16 x;
    u8 *p;
    Icon *ic;
    Rec *r;
    u32 m;

    if (data_ov000_02051548->hide == 0) {
        MIi_CpuClear16(0, flags, 0x20);
        for (i = 0; i < 0x25; i++) {
            u16 id = data_0203673c->map[data_ov000_02051548->sel].ids[i];
            if (id != 0xFFFF) {
                r = &data_0203673c->recs[id];
                if (r->h10 != 0) {
                    if (r->bit5 == 0 && r->bit30 == 0) {
                        flags[data_0203673c->cells[r->idx].race] = 1;
                    }
                }
            }
        }
        x = data_ov000_0205154c->h56c;
        p = data_ov003_020ab050;
        y = 0x40;
        for (i = 0; i < 8; i++, p++) {
            if (*p != 0 && flags[*p] != 0) {
                ic      = SetStatusIcon(0xFFA4, data_ov003_020ab048[*p], y, 0xB0, x, 0, 0, (u8 *) data_ov000_02051548 + 0x78C,
                                        data_ov000_02051548->w12c, 0);
                ic->h72 = *p;
                ic->w |= 0x200000;
                ic->ba = 0;
                ic->bb = 0;
                ic->b8 = 0x10;
                ic->b9 = 0x10;
                ic->b3e |= 0x80;
                m = data_ov000_02051548->mapno;
                if (m < 0x42 && data_ov003_020b0cf0[m].kind == 1) {
                    u32 *q = data_ov003_020b0cf0[m].ptr;
                    if (q != NULL && *p == ((W *) q)->race) {
                        ic->b3e &= ~0x80;
                    }
                }
                y += 0x18;
            }
        }
        G2x_SetBlendBrightnessExt_(0x4000050, 0x10, 0xF, 0x10, 0, 0);
    }
}

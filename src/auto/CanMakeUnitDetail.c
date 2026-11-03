/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x15];
    u8 v;
    u8 pad2[0x20 - 0x16];
} Row;

typedef struct {
    u8 pad[4];
    Row *rows;
} G;

typedef struct {
    struct {
        u32 lo : 23;
        u32 flag : 1;
        u32 rest : 8;
    } w0;
    u8 pad[0x210 - 4];
    struct {
        u32 a : 14;
        u32 val : 14;
        u32 r : 4;
    } w210;
    struct {
        u32 c7 : 3;
        u32 c0 : 3;
        u32 c1 : 3;
        u32 c3 : 3;
        u32 c2 : 3;
        u32 c5 : 3;
        u32 rest : 14;
    } w214;
} Unit;

typedef struct {
    s32 n;
    u32 id[16];
    u32 flag[16];
} Out;

extern G *data_0203673c;

s32 CanMakeUnitDetail(Unit *u, u32 kind, Out *out) {
    u32 i = 0;

    out->n = 0;
    switch (kind) {
        case 0:
            for (; i < u->w214.c0; i++) {
                u32 id          = i + (!u->w0.flag ? 0x41 : 0x5d);
                out->id[out->n] = id;
                if (data_0203673c->rows[id].v <= u->w210.val) {
                    out->flag[out->n] = 0;
                } else {
                    out->flag[out->n] = 1;
                }
                out->n++;
            }
            break;
        case 1:
            for (; i < u->w214.c1; i++) {
                u32 id          = i + (!u->w0.flag ? 0x47 : 0x63);
                out->id[out->n] = id;
                if (data_0203673c->rows[id].v <= u->w210.val) {
                    out->flag[out->n] = 0;
                } else {
                    out->flag[out->n] = 1;
                }
                out->n++;
            }
            break;
        case 2:
            for (; i < u->w214.c2; i++) {
                u32 id          = i + (!u->w0.flag ? 0x4c : 0x68);
                out->id[out->n] = id;
                if (data_0203673c->rows[id].v <= u->w210.val) {
                    out->flag[out->n] = 0;
                } else {
                    out->flag[out->n] = 1;
                }
                out->n++;
            }
            break;
        case 3:
            for (; i < u->w214.c3; i++) {
                u32 id          = i + (!u->w0.flag ? 0x51 : 0x6d);
                out->id[out->n] = id;
                if (data_0203673c->rows[id].v <= u->w210.val) {
                    out->flag[out->n] = 0;
                } else {
                    out->flag[out->n] = 1;
                }
                out->n++;
            }
            break;
        case 5:
            for (; i < u->w214.c5; i++) {
                u32 id          = i + (!u->w0.flag ? 0x56 : 0x72);
                out->id[out->n] = id;
                if (data_0203673c->rows[id].v <= u->w210.val) {
                    out->flag[out->n] = 0;
                } else {
                    out->flag[out->n] = 1;
                }
                out->n++;
            }
            break;
        case 7:
            for (; i < u->w214.c7; i++) {
                u32 id          = i + (!u->w0.flag ? 0x3d : 0x59);
                out->id[out->n] = id;
                if (data_0203673c->rows[id].v <= u->w210.val) {
                    out->flag[out->n] = 0;
                } else {
                    out->flag[out->n] = 1;
                }
                out->n++;
            }
            break;
    }
    return out->n != 0;
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad : 11;
    u32 idx : 8;
} Info;

typedef struct {
    u32 pad : 18;
    u32 kind : 5;
} Kind;

typedef struct {
    u32 pad : 23;
    u32 team : 4;
} W8;

typedef struct {
    u8 pad0[8];
    W8 w8;
    u8 pad1[0xcc - 0xc];
    u8 mode;
    s8 id;
    s8 px;
    s8 py;
    u8 pad2[0xe8 - 0xd0];
    Info *info;
} Unit;

typedef struct {
    u32 act : 1;
    u32 pad : 31;
    u32 w4;
    W8 w8;
    u8 pad2[272 - 12];
} Ent;

typedef struct {
    u8 pad[0x10];
    u8 *tbl;
} Ctx;

extern Ent data_ov003_020b0cf0[];
extern Ctx *data_0203673c;
s32 searchSamePosObj(Unit *, s32, s32);

s32 GetTargetObj(Unit *u) {
    s32 id;
    u32 t;
    switch (u->mode) {
        case 2:
        case 6:
        case 7:
            id = u->id;
            if (data_ov003_020b0cf0[id].act == 0) {
                return -1;
            }
            t = data_ov003_020b0cf0[id].w8.team;
            if (t >= 4) {
                return id;
            }
            if ((t ^ u->w8.team) & 1) {
                if (((Kind *) (data_0203673c->tbl + 8))[u->info->idx].kind == 4) {
                    id = -1;
                }
            } else {
                if (((Kind *) (data_0203673c->tbl + 8))[u->info->idx].kind != 4) {
                    id = -1;
                }
            }
            return id;
        case 1:
            id = searchSamePosObj(u, u->px, u->py);
            if (id == -1) {
                return -1;
            }
            t = data_ov003_020b0cf0[id].w8.team;
            if (t >= 4) {
                return id;
            }
            if (((Kind *) (data_0203673c->tbl + 8))[u->info->idx].kind == 4) {
                if (t == u->w8.team) {
                    return id;
                }
            } else if ((t ^ u->w8.team) & 1) {
                return id;
            }
            break;
        default:
            break;
    }
    return -1;
}

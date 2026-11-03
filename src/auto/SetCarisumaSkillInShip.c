/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 w0_pad : 16;
    u32 f16 : 1;
    u32 w0_rest : 15;
    u8 pad[0x2b0 - 4];
    u16 skill;
    u8 pad2[0x2d0 - 0x2b2];
} Unit;
typedef struct {
    u32 b0 : 1;
    u32 pad0 : 1;
    u32 idx : 9;
    u32 rest0 : 21;
    u32 v : 4;
    u32 pad4 : 1;
    u32 f5 : 1;
    u32 rest4 : 26;
    u32 pad8 : 23;
    u32 f23 : 1;
    u32 rest8 : 8;
    u8 pad_c[0x34 - 0xc];
} Ent;
typedef struct {
    u8 pad0[8];
    u32 pad8 : 10;
    u32 kind : 4;
    u32 rest8 : 18;
    u8 padc[0x17 - 0xc];
    u8 lvl;
    u8 pad18[8];
} Mst;
typedef struct {
    u8 pad[4];
    Mst *mst;
    u8 pad2[0x24 - 8];
    Ent *ents;
    Unit *units;
} G;
extern G *data_0203673c;
void SetCarisumaSkillInShip(void) {
    Mst *m;
    Unit *u;
    Ent *e;
    s32 i, j;
    u32 k;
    for (i = 0; i < 4; i++) {
        u = &data_0203673c->units[i];
        if (u->f16 != 0) {
            u->skill = 0;
        }
    }
    e = data_0203673c->ents;
    for (j = 0; j < 0x58; j++, e++) {
        if (e->b0 == 0) {
            continue;
        }
        if (e->f5 == 0) {
            continue;
        }
        if (e->v >= 4) {
            continue;
        }
        if (e->f23 != 0) {
            continue;
        }

        if (data_0203673c->mst[e->idx].kind != 5) {
            continue;
        }
        k = data_0203673c->mst[e->idx].lvl;
        if (k < 0x10) {
            continue;
        }
        u = &data_0203673c->units[e->v];
        if (u->f16 != 0) {
            u->skill |= 1 << (k - 0x10);
        }
    }
}

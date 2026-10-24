/* near start: 40 diffs with profile "1.2/sp3 -O2,p" */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    u32 lo : 16;
    u32 f : 3;
    u32 hi : 13;
} Sub;

typedef struct {
    u8 pad[0x60];
    s8 x;
    s8 y;
    u8 pad2[0x86];
    Sub *sub;
} Unit;

typedef struct {
    u8 pad[0x4E0];
    u32 v : 14;
    u32 rest : 18;
} World;

typedef struct {
    u8 pad[0x28];
    World *w;
} Glob;

typedef struct {
    s8 x;
    s8 y;
    u8 pad[0x10E];
} Pos;

typedef struct {
    u8 pad[0x10];
    u16 h;
} Info;

typedef struct {
    Info *info;
    u8 pad[0x10C];
} Ent;

extern Glob *data_0203673c;
extern Pos data_ov003_020b0d50[];
extern Pos data_ov003_020b0d51[];
extern Ent data_ov003_020b0dd8[];

void changeOccWithKihon(s32, Unit *, s32, s32);
void changeOcc(s32, Unit *, s32, s32);
s32 ShipIsAtHook(Unit *);
s32 GetGaiaFromShip(Unit *);
s32 GetTrentFromShip(Unit *);
s32 GetGaiaTrentFromShip(Unit *);
s32 GetEnemyInOneUnitSite(Unit *);
s32 GetEnemyInSite(Unit *);
s32 CheckObjIsResource(s32);

void func_ov107_020d7d28(Unit *u) {
    World *w;
    s32 m;
    s32 e;
    s32 k;
    s32 b;
    w = data_0203673c->w;
    changeOccWithKihon(0, u, 0, 0);
    b = (u->sub->f != 0);
    if (b == 1) {
        e = ShipIsAtHook(u);
        if (e == -1) {
            return;
        }
        changeOcc(2, u, e, 0);
        return;
    }
    if (w->v < 3) {
        e = GetGaiaFromShip(u);
    } else {
        e = GetTrentFromShip(u);
    }
    if (e == 1) {
        e = GetGaiaTrentFromShip(u);
    }
    if (e != -1) {
        changeOcc(2, u, e, 0);
        m = 0;
        if (u->x == data_ov003_020b0d50[e].x) {
            if (u->y == data_ov003_020b0d51[e].x) {
                m = 1;
            }
        }
        b = (m != 0);
        if (b == 1) {
            changeOcc(3, u, e, 0);
        }
        return;
    }
    e = GetEnemyInOneUnitSite(u);
    if (e == -1) {
        e = GetEnemyInSite(u);
    }
    if (CheckObjIsResource(e) != 1) {
        return;
    }
    if (data_ov003_020b0dd8[e].info->h == 0) {
        return;
    }
    changeOcc(2, u, e, 0);
    if (u->x != data_ov003_020b0d50[e].x) {
        return;
    }
    if (u->y != data_ov003_020b0d51[e].x) {
        return;
    }
    changeOcc(3, u, e, 0);
}

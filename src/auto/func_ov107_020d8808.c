#include "m2c.h"

typedef struct {
    u32 lo : 26;
    u32 top : 6;
} Cw;

typedef struct {
    Cw w0;
    Cw w4;
    u8 b8;
} Ctl;

typedef struct {
    u32 lo : 14;
} Lo14;

typedef struct {
    u32 pad : 14;
    u32 mid : 14;
} Mid14;

typedef struct {
    u32 lo4 : 4;
} Lo4;

typedef struct {
    u32 side : 2;
} Side;

typedef struct {
    u8 pad0[4];
    Side w4;
    u8 pad1[0x210 - 8];
    union {
        Lo14 a;
        Mid14 b;
    } w210;
    u8 pad2[0x254 - 0x214];
    Lo4 w254;
} Unit;

typedef struct {
    u8 pad[0x100];
    Ctl *ctl[4];
} G;

extern G *data_ov000_02051548;
s32 GetNowBuildHouseKazu(Unit *);
void BuildHouse(Unit *, s32);
s32 GetCanBuildHouse(Unit *, u8 *);
s32 DecideBuildHouse(Unit *, u8 *);
s32 GetNowUnitKazu(Unit *);
s32 GetNowUnitKazuByUnitType(Unit *, s32);
s32 DecideMakeUnitFromType(Unit *, s32);
void MakeUnitOne(Unit *, s32);
s32 GetCanMakeUnitType(Unit *, u8 *);
s32 DecideMakeUnitType(Unit *, u8 *);

void func_ov107_020d8808(Unit *u) {
    Ctl *c;
    u8 buf44[0x44];
    u8 buf0[0x44];
    s32 r;

    c = data_ov000_02051548->ctl[u->w4.side];
    if (GetNowBuildHouseKazu(u) < c->b8 && u->w210.a.lo >= c->w0.lo) {
        if (u->w254.lo4 == 0) {
            BuildHouse(u, 7);
            return;
        }
        if (GetCanBuildHouse(u, buf44) == 1) {
            r = DecideBuildHouse(u, buf44);
            if (r != 9) {
                BuildHouse(u, r);
                return;
            }
        }
    }
    c = data_ov000_02051548->ctl[u->w4.side];
    if (GetNowUnitKazu(u) >= c->w0.top) {
        return;
    }
    if (u->w210.b.mid < c->w4.lo) {
        return;
    }
    if (GetNowUnitKazuByUnitType(u, 7) < data_ov000_02051548->ctl[u->w4.side]->w4.top) {
        r = DecideMakeUnitFromType(u, 7);
        if (r == 0) {
            return;
        }
        MakeUnitOne(u, r);
    } else {
        if (GetCanMakeUnitType(u, buf0) != 1) {
            return;
        }
        r = DecideMakeUnitType(u, buf0);
        if (r == 0) {
            return;
        }
        r = DecideMakeUnitFromType(u, r);
        if (r == 0) {
            return;
        }
        MakeUnitOne(u, r);
    }
}

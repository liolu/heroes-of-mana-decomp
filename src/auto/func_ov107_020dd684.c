#include "m2c.h"
typedef struct {
    u8 pad[0xa8];
    u16 pad_a8 : 14;
    u16 mode : 2;
} Unit;
typedef struct {
    u8 pad[0x28];
    u8 *units;
} G;
typedef struct {
    u8 pad[0x10];
    u16 v;
} Rec;
typedef struct {
    Rec *rec;
    u8 pad[0x110 - 4];
} Ent;
extern G *data_0203673c;
extern Ent data_ov003_020b0dd8[];
s32 GetGaiaTrentFromShip(Unit *);
void ReOrderOrderUnit(Unit *);
s32 GetNowUnitKazu(void *);
void researchHookObj(Unit *);
s32 GetHookAooNo(Unit *, s32, s32, s32);
s32 checkHookStatus(s32);
void changeOccWithKihon(s32, Unit *, s32, s32);
void func_ov107_020dd684(Unit *u) {
    s32 g;
    s32 r;
    u8 *units;
    units = data_0203673c->units;
    if (u->mode == 2) {
        g = GetGaiaTrentFromShip(u);
        if (g == -1) {
            return;
        }
        if (data_ov003_020b0dd8[g].rec->v >= 5) {
            ReOrderOrderUnit(u);
            return;
        }
        if (GetNowUnitKazu(units + 0x2d0) < 10) {
            ReOrderOrderUnit(u);
            return;
        }
    }
    researchHookObj(u);
    r = GetHookAooNo(u, 2, 0, 1);
    if (r == -1 || checkHookStatus(r) != -1) {
        r = GetHookAooNo(u, 2, 0, 2);
    }
    if (r == -1 || checkHookStatus(r) != -1) {
        r = GetHookAooNo(u, 2, 0, 3);
    }
    if (r == -1) {
        return;
    }
    if (checkHookStatus(r) != -1) {
        return;
    }
    changeOccWithKihon(2, u, r, 0);
}

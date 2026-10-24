#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u16 a;
    u16 b;
} Sub;

typedef struct {
    u8 pad[0xa8];
    u16 lo : 14;
    u16 mode : 2;
    u8 pad2[0x3e];
    Sub *sub;
} Unit;

typedef struct {
    u8 pad[0x8c];
    u32 flags;
} Glob;

typedef struct {
    u8 pad[0x28];
    u8 *p28;
} Ctx;

typedef struct {
    u8 pad[0x10];
    u16 hp;
} Rec;

typedef struct {
    Rec *p;
    u8 pad[268];
} Ent;

extern Glob *data_ov000_02051548;
extern Ctx *data_0203673c;
extern Ent data_ov003_020b0dd8[];
s32 func_0202d478(s32, s32);
void SetDestination(Unit *, s32, s32);
s32 GetNowUnitKazu(u8 *);
void ReOrderOrderUnit(Unit *);
s32 GetAooNoFromCharNo(s32);
s32 GetGaiaTrentFromShip(Unit *);
void researchHookObj(Unit *);
s32 GetHookAooNo(Unit *, s32, s32, s32);
s32 checkHookStatus(s32);
void changeOccWithKihon(s32, Unit *, s32, s32);

void func_ov107_020de86c(Unit *unit) {
    u8 *c;
    s32 h;
    s32 t;

    c = data_0203673c->p28;
    if ((data_ov000_02051548->flags & 2) == 2) {
        SetDestination(unit, 0, 39);
        return;
    }
    if (unit->mode == 2) {
        if (func_0202d478(unit->sub->a * 100, unit->sub->b) <= 50) {
            if (GetNowUnitKazu(c + 0x2d0) < 20) {
                ReOrderOrderUnit(unit);
                return;
            }
        } else if (GetAooNoFromCharNo(29) != -1) {
            ReOrderOrderUnit(unit);
            return;
        }
        t = GetGaiaTrentFromShip(unit);
        if (t == -1) {
            return;
        }
        if (data_ov003_020b0dd8[t].p->hp >= 5) {
            ReOrderOrderUnit(unit);
            return;
        }
    }
    researchHookObj(unit);
    h = GetHookAooNo(unit, 0, 0, 1);
    if (h == -1 || checkHookStatus(h) != -1) {
        h = GetHookAooNo(unit, 0, 0, 2);
    }
    if (h == -1 || checkHookStatus(h) != -1) {
        h = GetHookAooNo(unit, 0, 0, 3);
    }
    if (h == -1) {
        return;
    }
    if (checkHookStatus(h) == -1) {
        changeOccWithKihon(2, unit, h, 0);
    }
}

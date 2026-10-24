#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u16 a;
    u16 b;
} Sub;

typedef struct {
    u8 pad[0xe8];
    Sub *sub;
} Unit;

typedef struct {
    u8 pad[0x8c];
    u32 flags;
} Glob;

typedef struct {
    u8 pad[0x10];
    u16 hp;
} Rec;

extern Glob *data_ov000_02051548;
typedef struct {
    Rec *p;
    u8 pad[268];
} Ent;

extern Ent data_ov003_020b0dd8[];
s32 func_0202d478(s32, s32);
s32 GetUnitOfFunc(Unit *, s32, s32, void *);
s32 distanceForRecover(s32, Unit *);
void changeOcc(s32, Unit *, s32, s32);
s32 GetEnemyInOneUnitSite(Unit *);
s32 GetAooNoFromCharNo(s32);
void SetDestination(Unit *, s32, s32);
void ReadySetUpWaza(Unit *);
s32 distanceForBattle(s32, Unit *);
void SearchGoddessOrHookWithShipFunc(void);

void func_ov107_020db68c(Unit *unit) {
    Glob *g;
    u32 f;
    s32 t;
    s32 e;
    s32 n;

    g = data_ov000_02051548;
    f = g->flags & 0x2000;
    if (func_0202d478(unit->sub->a * 100, unit->sub->b) < 30 || f == 0x2000) {
        g->flags |= 0x2000;
        if (func_0202d478(unit->sub->a * 100, unit->sub->b) > 80) {
            data_ov000_02051548->flags ^= 0x2000;
        }
        t = GetUnitOfFunc(unit, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (t != -1) {
            if (distanceForRecover(t, unit) == 1) {
                changeOcc(0, unit, t, 0);
            } else {
                changeOcc(6, unit, t, 0);
            }
            return;
        }
    }
    e = GetEnemyInOneUnitSite(unit);
    if (e == -1) {
        n = GetAooNoFromCharNo(7);
        if (n == -1) {
            SetDestination(unit, 2, 23);
        } else if (data_ov003_020b0dd8[n].p->hp < 400) {
            changeOcc(2, unit, n, 0);
        } else {
            SetDestination(unit, 2, 23);
        }
        return;
    }
    ReadySetUpWaza(unit);
    if (distanceForBattle(e, unit) == 1) {
        changeOcc(3, unit, e, 0);
    } else {
        changeOcc(2, unit, e, 0);
    }
}

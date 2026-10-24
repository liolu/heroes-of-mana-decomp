#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u16 a;
    u16 b;
} St;
typedef struct {
    u8 pad[0xE8];
    St *st;
} Unit;
typedef struct {
    u8 pad[0x8C];
    u32 fl;
} Gl;

extern s32 func_0202d478(s32, u16);
extern s32 GetUnitOfFunc(Unit *, s32, s32, void *);
extern s32 distanceForRecover(s32, Unit *);
extern s32 distanceForBattle(s32, Unit *);
extern void changeOcc(s32, Unit *, s32, s32);
extern void ReadySetUpWaza(Unit *);
extern s32 GetEnemyInOneUnitSite(Unit *);
extern void SetDestination(Unit *, s32, s32);
extern u8 SearchGoddessOrHookWithShipFunc;
extern Gl *data_ov000_02051548;

void func_ov107_020dabc0(Unit *u) {
    St *s;
    Gl *g;
    u32 flag;
    s32 t;
    s32 e;

    s    = u->st;
    g    = data_ov000_02051548;
    flag = g->fl & 0x1000;
    if (func_0202d478(s->a * 100, s->b) < 0x1E || flag == 0x1000) {
        g->fl |= 0x1000;
        if (func_0202d478(u->st->a * 100, u->st->b) > 0x50) {
            data_ov000_02051548->fl ^= 0x1000;
        }
        t = GetUnitOfFunc(u, 0, 1, &SearchGoddessOrHookWithShipFunc);
        if (t != -1) {
            if (distanceForRecover(t, u) == 1) {
                changeOcc(0, u, t, 0);
                return;
            }
            changeOcc(6, u, t, 0);
            return;
        }
    }
    ReadySetUpWaza(u);
    e = GetEnemyInOneUnitSite(u);
    if (e == -1) {
        t = GetUnitOfFunc(u, 0, 1, &SearchGoddessOrHookWithShipFunc);
        if (t != -1 && distanceForRecover(t, u) == 1) {
            if (func_0202d478(u->st->a * 100, u->st->b) < 0x64) {
                changeOcc(0, u, t, 0);
                return;
            }
        }
        SetDestination(u, 0xF, 0xC);
        return;
    }
    if (distanceForBattle(e, u) == 1) {
        changeOcc(3, u, e, 0);
        return;
    }
    changeOcc(2, u, e, 0);
}

#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u16 h10;
    u16 h12;
} U;
typedef struct {
    u8 pad[0xe8];
    U *unit;
} O;
typedef struct {
    u8 pad[0x8c];
    u32 f8c;
} G;

extern G *data_ov000_02051548;

s32 func_0202d478(s32, s32);
s32 GetUnitOfFunc(O *, s32, s32, void *);
s32 distanceForRecover(s32, O *);
void changeOcc(s32, O *, s32, s32);
s32 GetEnemyInOneUnitSite(O *);
s32 GetAooNoFromCharNo(s32);
s32 GetEnemyInSite(O *);
void ReadySetUpWaza(O *);
s32 distanceForBattle(s32, O *);
void SearchGoddessOrHookWithShipFunc(void);

void func_ov107_020de320(O *o) {
    G *g;
    u32 fl;
    s32 e, t, a;

    g  = data_ov000_02051548;
    fl = g->f8c & 0x1000;
    if (func_0202d478(o->unit->h10 * 100, o->unit->h12) < 0x28 || fl == 0x1000) {
        g->f8c |= 0x1000;
        if (func_0202d478(o->unit->h10 * 100, o->unit->h12) > 0x50) {
            data_ov000_02051548->f8c ^= 0x1000;
        }
        t = GetUnitOfFunc(o, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (t != -1) {
            if (distanceForRecover(t, o) == 1) {
                changeOcc(0, o, t, 0);
            } else {
                changeOcc(6, o, t, 0);
            }
            return;
        }
    }
    e = GetEnemyInOneUnitSite(o);
    if (e == -1) {
        t = GetUnitOfFunc(o, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (t != -1 && distanceForRecover(t, o) == 1 && func_0202d478(o->unit->h10 * 100, o->unit->h12) < 100) {
            changeOcc(0, o, t, 0);
            return;
        }
        a = GetAooNoFromCharNo(7);
        if (a == -1) {
            a = GetAooNoFromCharNo(5);
        }
        if (a != -1) {
            changeOcc(2, o, a, 0);
            return;
        }
        if (func_0202d478(o->unit->h10 * 100, o->unit->h12) > 0x5a) {
            e = GetEnemyInSite(o);
            if (e == -1) {
                return;
            }
            if (e == GetAooNoFromCharNo(0xf20 - -1)) {
                return;
            }
        } else {
            e = GetAooNoFromCharNo(0);
            if (e != -1) {
                changeOcc(2, o, e, 0);
                return;
            }
        }
    }
    ReadySetUpWaza(o);
    if (distanceForBattle(e, o) == 1) {
        changeOcc(3, o, e, 0);
    } else {
        changeOcc(2, o, e, 0);
    }
}

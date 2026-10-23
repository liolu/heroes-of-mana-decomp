#include "m2c.h"

typedef struct St {
    u8 p[0x10];
    u16 hp;
    u16 mhp;
} St;
typedef struct Ob {
    u8 p[0xe8];
    St *st;
} Ob;
typedef struct Gl {
    u8 p[0x8c];
    u32 w8c;
} Gl;
typedef struct Tb {
    u8 p[0x10];
    u16 h10;
} Tb;
extern Gl *data_ov000_02051548;
typedef struct Row {
    Tb *p;
    u8 pad[0x10c];
} Row;
extern Row data_ov003_020b0dd8[];
extern void SearchGoddessOrHookWithShipFunc(void);
s32 func_0202d478(s32, s32);
s32 GetUnitOfFunc(Ob *, s32, s32, void *);
s32 distanceForRecover(s32, Ob *);
void changeOcc(s32, Ob *, s32, s32);
s32 GetEnemyInOneUnitSite(Ob *);
s32 GetAooNoFromCharNo(s32);
void SetDestination(Ob *, s32, s32);
void ReadySetUpWaza(Ob *);
s32 distanceForBattle(s32, Ob *);

void func_ov107_020dda38(Ob *o) {
    Gl *g;
    s32 u;
    u32 fl;
    St *s = o->st;
    g     = data_ov000_02051548;
    fl    = g->w8c & 0x1000;
    if (func_0202d478(s->hp * 100, s->mhp) < 40 || fl == 0x1000) {
        g->w8c |= 0x1000;
        if (func_0202d478(o->st->hp * 100, o->st->mhp) > 80) {
            data_ov000_02051548->w8c ^= 0x1000;
        }
        u = GetUnitOfFunc(o, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (u != -1) {
            if (distanceForRecover(u, o) == 1) {
                changeOcc(0, o, u, 0);
            } else {
                changeOcc(6, o, u, 0);
            }
            return;
        }
    }
    u = GetEnemyInOneUnitSite(o);
    if (u == -1) {
        u = GetUnitOfFunc(o, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (u != -1 && distanceForRecover(u, o) == 1 && func_0202d478(o->st->hp * 100, o->st->mhp) < 100) {
            changeOcc(0, o, u, 0);
            return;
        }
        u = GetAooNoFromCharNo(0x18);
        if (u == -1 || func_0202d478(o->st->hp * 100, o->st->mhp) < 60) {
            u = GetAooNoFromCharNo(2);
            if (u == -1) {
                u = GetAooNoFromCharNo(9);
                if (u == -1) {
                    u = GetAooNoFromCharNo(0);
                }
            }
            if (u == -1) {
                return;
            }
        }
        changeOcc(2, o, u, 0);
    } else {
        ReadySetUpWaza(o);
        if (distanceForBattle(u, o) == 1) {
            changeOcc(3, o, u, 0);
        } else {
            changeOcc(2, o, u, 0);
        }
    }
}

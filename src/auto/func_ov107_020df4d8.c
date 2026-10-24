#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u16 a;
    u16 b;
} Stat;
typedef struct {
    u8 pad[0xE8];
    Stat *st;
} Unit;
typedef struct {
    u8 pad[0x8C];
    u32 flags;
} Glob;

s32 func_0202d478(s32, u16);
s32 distanceForRecover(s32, void *);
s32 GetAooNoFromCharNo(s32);
void changeOcc(s32, void *, s32, s32);
s32 distanceForBattle(s32, void *);
void ReadySetUpWaza(void *);
s32 GetEnemyInOneUnitSite(void *);
extern Glob *data_ov000_02051548;

void func_ov107_020df4d8(Unit *arg0) {
    s32 t;
    s32 v;
    u32 f;
    Glob *g;

    g = data_ov000_02051548;
    f = g->flags & 0x1000;
    if ((func_0202d478(arg0->st->a * 0x64, arg0->st->b) < 0x28) || (f == 0x1000)) {
        g->flags = g->flags | 0x1000;
        if (func_0202d478(arg0->st->a * 0x64, arg0->st->b) > 0x3C) {
            data_ov000_02051548->flags = data_ov000_02051548->flags ^ 0x1000;
        }
        t = GetAooNoFromCharNo(0xF0A);
        if (t != -1) {
            if (distanceForRecover(t, arg0) == 1) {
                changeOcc(0, arg0, t, 0);
                return;
            }
            changeOcc(6, arg0, t, 0);
            return;
        }
    }
    ReadySetUpWaza(arg0);
    v = GetEnemyInOneUnitSite(arg0);
    if (v == -1) {
        if (func_0202d478(arg0->st->a * 0x64, arg0->st->b) < 0x5A) {
            v = GetAooNoFromCharNo(0);
        }
        if (v == -1) {
            return;
        }
        changeOcc(2, arg0, v, 0);
        return;
    }
    if (distanceForBattle(v, arg0) == 1) {
        changeOcc(3, arg0, v, 0);
        return;
    }
    changeOcc(2, arg0, v, 0);
}

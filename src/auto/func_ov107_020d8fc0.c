#include "m2c.h"

typedef struct Row {
    u8 pad[0xC];
    u32 kind : 6;
    u8 pad2[4];
} Row;
typedef struct Sub {
    u32 lo : 11;
    u32 type : 8;
    u8 pad[0x12];
    u16 idx;
} Sub;
typedef struct Unit {
    u8 pad[0xE8];
    Sub *sub;
} Unit;
typedef struct G {
    u8 pad[8];
    Row *tbl;
} G;

s32 GetFriendOfHalfHP(Unit *);
s32 GetEnemyInOneUnitSite(Unit *);
void SetWazaBySpOrNormal(Unit *, s32);
s32 GetEnemyInSite(Unit *);
s32 CheckObjIsResource(s32);
s32 GetUnitTypeByNo(s32);
void ReOrderOrderUnit(Unit *);
void ReadySetUpWaza(Unit *);
s32 distanceForBattle(s32, Unit *);
void changeOcc(s32, Unit *, s32, s32);
extern G *data_0203673c;

void func_ov107_020d8fc0(Unit *u) {
    s32 r;
    s32 v;
    if (u->sub->type == 7) {
        v = 0;
    } else if (data_0203673c->tbl[u->sub->idx].kind == 0x15) {
        v = 1;
    } else {
        v = 0;
    }
    if (v == 1) {
        r = GetFriendOfHalfHP(u);
        if (r == -1) {
            r = GetEnemyInOneUnitSite(u);
            SetWazaBySpOrNormal(u, 0);
        } else {
            SetWazaBySpOrNormal(u, 1);
        }
    } else {
        r = GetEnemyInOneUnitSite(u);
    }
    if (r == -1) {
        r = GetEnemyInSite(u);
        if (r == -1) {
            return;
        }
        if (CheckObjIsResource(r) == 1) {
            return;
        }
        if (GetUnitTypeByNo(r) != 7) {
            ReOrderOrderUnit(u);
            return;
        }
    }
    ReadySetUpWaza(u);
    if (distanceForBattle(r, u) == 1) {
        changeOcc(3, u, r, 0);
    } else {
        changeOcc(2, u, r, 0);
    }
}

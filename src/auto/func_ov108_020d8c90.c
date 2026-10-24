#include "m2c.h"
typedef struct {
    u32 p0 : 11;
    u32 kind : 8;
    u32 p1 : 13;
    u8 pad[0x12];
    u16 idx;
} U;
typedef struct {
    u8 pad[0xc];
    u32 t : 6;
    u32 t1 : 26;
    u32 pad2;
} E;
typedef struct {
    u8 pad[0xe8];
    U *u;
} O;
typedef struct {
    u8 pad[8];
    E *tab;
} T;
extern T *data_0203673c;
s32 GetFriendOfHalfHP(O *);
s32 GetEnemyInOneUnitSite(O *);
void SetWazaBySpOrNormal(O *, s32);
s32 GetEnemyInSite(O *);
void ReOrderOrderUnit(O *);
void ReadySetUpWaza(O *);
s32 distanceForBattle(s32, O *);
void changeOcc(s32, O *, s32, s32);
void func_ov108_020d8c90(O *o) {
    s32 f;
    s32 r;
    if (o->u->kind == 7) {
        f = 0;
    } else if (data_0203673c->tab[o->u->idx].t == 0x15) {
        f = 1;
    } else {
        f = 0;
    }
    if (f == 1) {
        r = GetFriendOfHalfHP(o);
        if (r == -1) {
            r = GetEnemyInOneUnitSite(o);
            SetWazaBySpOrNormal(o, 0);
        } else {
            SetWazaBySpOrNormal(o, 1);
        }
    } else {
        r = GetEnemyInOneUnitSite(o);
    }
    if (r == -1) {
        r = GetEnemyInSite(o);
    }
    if (r == -1) {
        ReOrderOrderUnit(o);
        return;
    }
    ReadySetUpWaza(o);
    if (distanceForBattle(r, o) == 1) {
        changeOcc(3, o, r, 0);
        return;
    }
    changeOcc(6, o, r, 0);
}

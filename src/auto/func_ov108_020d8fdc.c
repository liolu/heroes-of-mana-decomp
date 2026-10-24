#include "m2c.h"
typedef struct {
    u32 p0 : 11;
    u32 kind : 8;
    u32 p1 : 13;
    u8 pad[0xC];
    u16 hp;
    u16 maxhp;
    u16 pad3;
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
    u8 pad[0x10];
    u16 hp;
} P;
typedef struct {
    P *p;
    u8 pad[0x10C];
} R;
typedef struct {
    u8 pad[8];
    E *tab;
} T;
extern T *data_0203673c;
extern R data_ov003_020b0dd8[];
s32 GetFriendOfHalfHP(O *);
s32 GetEnemyInOneUnitSite(O *);
void SetWazaBySpOrNormal(O *, s32);
s32 GetEnemyInSite(O *);
s32 CheckObjIsResource(s32);
s32 GetUnitType(O *);
s32 GetUnitTypeByNo(s32);
void ReadySetUpWaza(O *);
s32 distanceForBattle(s32, O *);
void changeOcc(s32, O *, s32, s32);
s32 func_0202d478(s32, s32);
void func_ov108_020d8fdc(O *o) {
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
        if (r == -1) {
            return;
        }
        if (CheckObjIsResource(r) == 1) {
            return;
        }
        switch (GetUnitType(o)) {
            case 1:
                if (GetUnitTypeByNo(r) == 4) {
                    changeOcc(2, o, r, 0);
                    return;
                }
                break;
            case 2:
                if (GetUnitTypeByNo(r) == 1) {
                    changeOcc(2, o, r, 0);
                    return;
                }
                break;
            case 3:
                if (GetUnitTypeByNo(r) == 2) {
                    changeOcc(2, o, r, 0);
                    return;
                }
                break;
            case 4:
                if (GetUnitTypeByNo(r) == 3) {
                    changeOcc(2, o, r, 0);
                    return;
                }
                break;
            case 5:
                if (GetUnitTypeByNo(r) == 5) {
                    changeOcc(2, o, r, 0);
                    return;
                }
                break;
            case 6:
                if (GetUnitTypeByNo(r) == 6) {
                    changeOcc(2, o, r, 0);
                    return;
                }
                break;
        }
        {
            U *u = o->u;
            if (u->hp <= data_ov003_020b0dd8[r].p->hp) {
                if (func_0202d478(u->hp * 100, u->maxhp) >= 100) {
                    return;
                }
            }
            changeOcc(2, o, r, 0);
            return;
        }
    }
    ReadySetUpWaza(o);
    if (distanceForBattle(r, o) == 1) {
        changeOcc(3, o, r, 0);
        return;
    }
    changeOcc(2, o, r, 0);
}

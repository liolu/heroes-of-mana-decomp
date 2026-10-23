#include "m2c.h"
typedef struct {
    u32 pad0 : 11;
    u32 kind : 8;
    u32 rest : 13;
    u8 pad[0x16 - 4];
    u16 idx;
} P;
typedef struct {
    u8 pad[0xc];
    u32 t : 6;
    u32 rest : 26;
    u8 pad2[0x14 - 0x10];
} Rec;
typedef struct {
    u8 pad[8];
    Rec *recs;
} G;
typedef struct {
    u8 pad[0xe8];
    P *p;
    u8 *q;
} U;
extern G *data_0203673c;
s32 GetFriendOfHalfHP(U *);
s32 GetEnemyInOneUnitSite(U *);
void SetWazaBySpOrNormal(U *, s32);
void ReOrderOrderUnit(U *);
void ReadySetUpWaza(U *);
s32 distanceForBattle(s32, U *);
void changeOcc(s32, U *, s32, s32);
s32 GetRnd(void);
void func_ov108_020d8b48(U *u) {
    s32 r4;
    s32 f;
    if (u->p->kind == 7) {
        f = 0;
    } else {
        f = data_0203673c->recs[u->p->idx].t == 0x15 ? 1 : 0;
    }
    if (f == 1) {
        r4 = GetFriendOfHalfHP(u);
        if (r4 == -1) {
            r4 = GetEnemyInOneUnitSite(u);
            SetWazaBySpOrNormal(u, 0);
        } else {
            SetWazaBySpOrNormal(u, 1);
        }
    } else {
        r4 = GetEnemyInOneUnitSite(u);
    }
    if (r4 == -1) {
        ReOrderOrderUnit(u);
        return;
    }
    ReadySetUpWaza(u);
    if (distanceForBattle(r4, u) == 1) {
        changeOcc(3, u, r4, 0);
        return;
    }
    if (GetRnd() % 100 >= u->q[6]) {
        ReOrderOrderUnit(u);
        return;
    }
    changeOcc(6, u, r4, 0);
}

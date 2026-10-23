#include "m2c.h"
typedef struct {
    u32 a : 11;
    u32 v : 8;
    u32 b : 13;
} Bf8;
typedef struct {
    u32 v : 6;
    u32 a : 26;
} Bf6;
extern s32 GetFriendOfHalfHP(u8 *);
extern s32 GetEnemyInOneUnitSite(u8 *);
extern void SetWazaBySpOrNormal(u8 *, s32);
extern void ReOrderOrderUnit(u8 *);
extern void ReadySetUpWaza(u8 *);
extern s32 distanceForBattle(s32, u8 *);
extern void changeOcc(s32, u8 *, s32, s32);
extern s32 GetRnd(void);
extern u8 *data_0203673c;

void func_ov107_020d8d04(u8 *u) {
    u8 *p = *(u8 **) (u + 0xe8);
    s32 f;
    s32 t;
    if (((Bf8 *) p)->v == 7) {
        f = 0;
    } else {
        f = ((Bf6 *) (*(u8 **) (data_0203673c + 8) + *(u16 *) (p + 0x16) * 0x14 + 0xc))->v == 0x15 ? 1 : 0;
    }
    if (f == 1) {
        t = GetFriendOfHalfHP(u);
        if (t == -1) {
            t = GetEnemyInOneUnitSite(u);
            SetWazaBySpOrNormal(u, 0);
        } else {
            SetWazaBySpOrNormal(u, 1);
        }
    } else {
        t = GetEnemyInOneUnitSite(u);
    }
    if (t == -1) {
        ReOrderOrderUnit(u);
        return;
    }
    ReadySetUpWaza(u);
    if (distanceForBattle(t, u) == 1) {
        changeOcc(3, u, t, 0);
        return;
    }
    if (GetRnd() % 100 >= *(u8 *) (*(u8 **) (u + 0xec) + 6)) {
        ReOrderOrderUnit(u);
        return;
    }
    changeOcc(6, u, t, 0);
}

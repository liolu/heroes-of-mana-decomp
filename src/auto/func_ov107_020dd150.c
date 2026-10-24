#include "m2c.h"
typedef struct {
    u8 pad[0xE8];
    u8 *p;
} U;
s32 func_0202d478(s32, u32);
void ReadySetUpWaza(U *);
s32 GetEnemyInOneUnitSite(U *);
s32 GetFriendOfHalfHP(U *);
s32 GetUnitOfFunc(U *, s32, s32, void *);
s32 distanceForRecover(s32, U *);
s32 distanceForBattle(s32, U *);
void changeOcc(s32, U *, s32, s32);
void SetDestination(U *, s32, s32);
extern u8 SearchGoddessOrHookWithShipFunc[];

void func_ov107_020dd150(U *u) {
    s32 a;
    u8 *q;
    a = GetFriendOfHalfHP(u);
    if (a == -1) {
        a = GetEnemyInOneUnitSite(u);
    }
    if (a == -1) {
        a = GetUnitOfFunc(u, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (a != -1 && distanceForRecover(a, u) == 1) {
            q = u->p;
            if (func_0202d478(*(u16 *) (q + 0x10) * 100, *(u16 *) (q + 0x12)) < 100) {
                changeOcc(0, u, a, 0);
                return;
            }
        }
        SetDestination(u, 0xD, 0);
        return;
    }
    ReadySetUpWaza(u);
    if (distanceForBattle(a, u) == 1) {
        changeOcc(3, u, a, 0);
        return;
    }
    changeOcc(2, u, a, 0);
}

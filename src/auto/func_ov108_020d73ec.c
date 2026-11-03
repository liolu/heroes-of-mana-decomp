#include "m2c.h"

s32 GetUnitNoFromOrder(s32);
s32 IsItEnemy(s32, s32);
void ReadySetUpWaza(s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);
s32 func_0202d478(s32, s32);
s32 GetUnitType(s32);
s32 GetUnitOfFunc(s32, s32, s32, void *);
s32 distanceForRecover(s32, s32);
s32 GetNearDistance(s32, s32);
s32 GetEnemyInOneUnitSite(s32);
s32 GetUnitBaseNoByAoo(s32);
s32 CanIUseSPwaza(s32);
s32 GetFriendOfHalfHP(s32);
void SetWazaBySpOrNormal(s32, s32);
void ActionWazaByLogic(s32, s32, s32, s32);
s32 GetEnemyInSite(s32);
void ReOrderOrderUnit(s32);
extern u8 SearchGoddessOrHookWithShipFunc[];
extern u8 SearchUnitFunc[];

void func_ov108_020d73ec(s32 u) {
    s32 n;
    u8 *e;

    n = GetUnitNoFromOrder(u);
    if (IsItEnemy(u, n) == 1) {
        ReadySetUpWaza(u);
        if (distanceForBattle(n, u) == 1) {
            changeOcc(3, u, n, 0);
        } else {
            changeOcc(2, u, n, 0);
        }
        return;
    }
    e = *(u8 **) (u + 0xE8);
    if (func_0202d478(M2C_FIELD(e, u16 *, 0x10) * 100, M2C_FIELD(e, u16 *, 0x12)) < 0x1E && GetUnitType(u) == 5) {
        n = GetUnitOfFunc(u, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (n != -1) {
            if (distanceForRecover(n, u) == 1) {
                changeOcc(0, u, n, 0);
            } else {
                changeOcc(6, u, n, 0);
            }
            return;
        }
    }
    e = *(u8 **) (u + 0xE8);
    if (GetNearDistance(u, func_0202d478(M2C_FIELD(e, u16 *, 0x10) * 100, M2C_FIELD(e, u16 *, 0x12)) < 0x32 ? 1 : 3) == 1) {
        n = GetEnemyInOneUnitSite(u);
        if (n == -1) {
            if (GetUnitBaseNoByAoo(u) == 0x44 && CanIUseSPwaza(u) == 1) {
                n = GetFriendOfHalfHP(u);
                if (n == -1) {
                    n = GetUnitOfFunc(u, 0, 1, SearchUnitFunc);
                    if (n == -1) {
                        changeOcc(0, u, 0, 0);
                        return;
                    }
                }
                SetWazaBySpOrNormal(u, 1);
                if (distanceForBattle(n, u) == 1) {
                    ActionWazaByLogic(u, 3, 0x48, -1);
                    return;
                }
                changeOcc(2, u, n, 0);
                return;
            }
            changeOcc(0, u, 0, 0);
            n = GetEnemyInSite(u);
            if (n == -1) {
                return;
            }
        }
        ReadySetUpWaza(u);
        if (distanceForBattle(n, u) == 1) {
            changeOcc(3, u, n, 0);
            return;
        }
        if (GetUnitType(u) != 5 && GetUnitType(u) != 6) {
            e = *(u8 **) (u + 0xE8);
            if (func_0202d478(M2C_FIELD(e, u16 *, 0x10) * 100, M2C_FIELD(e, u16 *, 0x12)) >= 0x32) {
                if (GetNearDistance(u, 2) == 1) {
                    n = GetEnemyInOneUnitSite(u);
                    if (n == -1) {
                        n = GetUnitOfFunc(u, 0, 1, SearchGoddessOrHookWithShipFunc);
                        if (n != -1 && distanceForRecover(n, u) == 1) {
                            e = *(u8 **) (u + 0xE8);
                            if (func_0202d478(M2C_FIELD(e, u16 *, 0x10) * 100, M2C_FIELD(e, u16 *, 0x12)) < 0x64) {
                                changeOcc(0, u, n, 0);
                                return;
                            }
                        }
                        ReOrderOrderUnit(u);
                        return;
                    } else {
                        changeOcc(2, u, n, 0);
                        return;
                    }
                } else {
                    ReOrderOrderUnit(u);
                    return;
                }
            }
        }
        n = GetUnitOfFunc(u, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (n != -1 && distanceForRecover(n, u) == 1) {
            e = *(u8 **) (u + 0xE8);
            if (func_0202d478(M2C_FIELD(e, u16 *, 0x10) * 100, M2C_FIELD(e, u16 *, 0x12)) < 0x64) {
                changeOcc(0, u, n, 0);
                return;
            }
        }
        ReOrderOrderUnit(u);
    } else {
        ReOrderOrderUnit(u);
    }
}

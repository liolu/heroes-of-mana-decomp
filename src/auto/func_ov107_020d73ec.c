#include "m2c.h"

s32 GetUnitNoFromOrder(u8 *);
s32 IsItEnemy(u8 *, s32);
void ReadySetUpWaza(u8 *);
s32 distanceForBattle(s32, u8 *);
void changeOcc(s32, u8 *, s32, s32);
s32 func_0202d478(s32, s32);
s32 GetUnitType(u8 *);
s32 GetUnitOfFunc(u8 *, s32, s32, void *);
s32 distanceForRecover(s32, u8 *);
s32 GetNearDistance(u8 *, s32);
s32 GetEnemyInOneUnitSite(u8 *);
s32 GetUnitBaseNoByAoo(u8 *);
s32 CanIUseSPwaza(u8 *);
s32 GetFriendOfHalfHP(u8 *);
void SetWazaBySpOrNormal(u8 *, s32);
void ActionWazaByLogic(u8 *, s32, s32, s32);
s32 GetEnemyInSite(u8 *);
void ReOrderOrderUnit(u8 *);
s32 SearchGoddessOrHookWithShipFunc(void);
s32 SearchUnitFunc(void);

void func_ov107_020d73ec(u8 *u) {
    u8 *ld;
    s32 r5;
    s32 r2;
    s32 t;

    r5 = GetUnitNoFromOrder(u);
    if (IsItEnemy(u, r5) == 1) {
        ReadySetUpWaza(u);
        if (distanceForBattle(r5, u) == 1) {
            changeOcc(3, u, r5, 0);
        } else {
            changeOcc(2, u, r5, 0);
        }
        return;
    }
    ld = *(u8 **) (u + 0xE8);
    t  = func_0202d478(0x64 * *(u16 *) (ld + 0x10), *(u16 *) (ld + 0x12));
    if (t < 0x1E) {
        if (GetUnitType(u) == 5) {
            r5 = GetUnitOfFunc(u, 0, 1, SearchGoddessOrHookWithShipFunc);
            if (r5 != -1) {
                if (distanceForRecover(r5, u) == 1) {
                    changeOcc(0, u, r5, 0);
                } else {
                    changeOcc(6, u, r5, 0);
                }
                return;
            }
        }
    }
    ld = *(u8 **) (u + 0xE8);
    t  = func_0202d478(0x64 * *(u16 *) (ld + 0x10), *(u16 *) (ld + 0x12));
    if (GetNearDistance(u, t < 0x32 ? 1 : 3) != 1) {
        goto LEND;
    }
    {
        r5 = GetEnemyInOneUnitSite(u);
        if (r5 != -1) {
            goto L7620;
        }
        if (GetUnitBaseNoByAoo(u) != 0x44) {
            goto L75F4;
        }
        if (CanIUseSPwaza(u) != 1) {
            goto L75F4;
        }
        r5 = GetFriendOfHalfHP(u);
        if (r5 == -1) {
            r5 = GetUnitOfFunc(u, 0, 1, SearchUnitFunc);
            if (r5 == -1) {
                changeOcc(0, u, 0, 0);
                return;
            }
        }
        goto L75A4;
    }

L75A4:
    SetWazaBySpOrNormal(u, 1);
    if (distanceForBattle(r5, u) == 1) {
        ActionWazaByLogic(u, 3, 0x48, -1);
        return;
    }
    changeOcc(2, u, r5, 0);
    return;

L75F4:
    changeOcc(0, u, 0, 0);
    r5 = GetEnemyInSite(u);
    if (r5 == -1) {
        return;
    }

L7620:
    ReadySetUpWaza(u);
    if (distanceForBattle(r5, u) != 1) {
        goto L7654;
    }
    changeOcc(3, u, r5, 0);
    return;

L7654:
    if (GetUnitType(u) == 5) {
        goto L7754;
    }
    if (GetUnitType(u) == 6) {
        goto L7754;
    }
    ld = *(u8 **) (u + 0xE8);
    t  = func_0202d478(0x64 * *(u16 *) (ld + 0x10), *(u16 *) (ld + 0x12));
    if (t < 0x32) {
        goto L7754;
    }
    if (GetNearDistance(u, 2) == 1) {
        r2 = GetEnemyInOneUnitSite(u);
        if (r2 == -1) {
            r5 = GetUnitOfFunc(u, 0, 1, SearchGoddessOrHookWithShipFunc);
            if (r5 != -1 && distanceForRecover(r5, u) == 1) {
                ld = *(u8 **) (u + 0xE8);
                t  = func_0202d478(0x64 * *(u16 *) (ld + 0x10), *(u16 *) (ld + 0x12));
                if (t < 0x64) {
                    changeOcc(0, u, r5, 0);
                    return;
                }
            }
            ReOrderOrderUnit(u);
            return;
        }
        changeOcc(2, u, r2, 0);
        return;
    }
    ReOrderOrderUnit(u);
    return;

L7754:
    r5 = GetUnitOfFunc(u, 0, 1, SearchGoddessOrHookWithShipFunc);
    if (r5 != -1 && distanceForRecover(r5, u) == 1) {
        ld = *(u8 **) (u + 0xE8);
        t  = func_0202d478(0x64 * *(u16 *) (ld + 0x10), *(u16 *) (ld + 0x12));
        if (t < 0x64) {
            changeOcc(0, u, r5, 0);
            return;
        }
    }
    ReOrderOrderUnit(u);
    return;

LEND:
    ReOrderOrderUnit(u);
}

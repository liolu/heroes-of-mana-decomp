#include "m2c.h"

typedef struct {
    u8 pad[0x10];
    u16 hp;
    u16 maxhp;
} Info;

typedef struct {
    u8 pad[0xE8];
    Info *info;
} Unit;

extern s32 SearchGoddessOrHookWithShipFunc(void);

s32 GetEnemyInOneUnitSite(Unit *);
s32 GetUnitBaseNoByAoo(Unit *);
s32 GetFriendOfHalfHP(Unit *);
s32 GetEnemyInSite(Unit *);
s32 GetAooNoFromCharNo(s32);
s32 GetUnitOfFunc(Unit *, s32, s32, s32 (*)(void));
s32 distanceForRecover(s32, Unit *);
s32 func_0202d478(s32, s32);
void changeOcc(s32, Unit *, s32, s32);
void ReadySetUpWaza(Unit *);
s32 distanceForBattle(s32, Unit *);

void func_ov107_020de68c(Unit *u) {
    s32 e;
    s32 t;

    e = GetEnemyInOneUnitSite(u);
    if (e == -1) {
        if (GetUnitBaseNoByAoo(u) == 0x31) {
            e = GetFriendOfHalfHP(u);
        } else {
            e = GetEnemyInSite(u);
        }
    }
    if (e == -1 || e == GetAooNoFromCharNo(0xF21)) {
        e = GetUnitOfFunc(u, 0, 1, SearchGoddessOrHookWithShipFunc);
        if (e != -1) {
            if (distanceForRecover(e, u) == 1) {
                if (func_0202d478(u->info->hp * 100, u->info->maxhp) < 100) {
                    changeOcc(0, u, e, 0);
                    return;
                }
            }
        }
        switch (GetUnitBaseNoByAoo(u)) {
            case 0x29:
                t = GetAooNoFromCharNo(7);
                break;
            case 0x2B:
                t = GetAooNoFromCharNo(6);
                break;
            case 0x2F:
                t = GetAooNoFromCharNo(5);
                break;
            case 0x31:
                t = GetAooNoFromCharNo(8);
                break;
            case 0x33:
                t = GetAooNoFromCharNo(9);
                break;
            default:
                t = -1;
                break;
        }
        if (t == -1) {
            t = GetAooNoFromCharNo(0xE);
        }
        if (t == -1) {
            return;
        }
        changeOcc(2, u, t, 0);
        return;
    }
    ReadySetUpWaza(u);
    if (distanceForBattle(e, u) == 1) {
        changeOcc(3, u, e, 0);
    } else {
        changeOcc(2, u, e, 0);
    }
}

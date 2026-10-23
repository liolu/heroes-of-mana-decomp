#include "m2c.h"

void ReadySetUpWaza(s32);
s32 GetEnemyInOneUnitSite(s32);
s32 GetUnitBaseNoByAoo(s32);
s32 GetAooNoFromCharNo(s32);
s32 GetEnemyInSite(s32);
s32 CheckObjIsResource(s32);
s32 GetUnitType(s32);
s32 GetUnitTypeByNo(s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);

void func_ov107_020e01c0(s32 a) {
    s32 u;

    ReadySetUpWaza(a);
    u = GetEnemyInOneUnitSite(a);
    if (u == -1) {
        switch (GetUnitBaseNoByAoo(a)) {
            case 0xa3:
                u = GetAooNoFromCharNo(0);
                break;
            case 0xa4:
                u = GetAooNoFromCharNo(1);
                break;
            case 0xa5:
                u = GetAooNoFromCharNo(2);
                break;
            case 0xa6:
                u = GetAooNoFromCharNo(3);
                break;
            case 0xa7:
                u = GetAooNoFromCharNo(4);
                break;
            case 0xa8:
                u = GetAooNoFromCharNo(5);
                break;
            case 0xb0:
                u = GetAooNoFromCharNo(6);
                break;
            case 0xb2:
                u = GetAooNoFromCharNo(7);
                break;
            case 0xb3:
                u = GetAooNoFromCharNo(8);
                break;
            case 0xb1:
                u = GetAooNoFromCharNo(9);
                break;
            case 0xaa:
                u = GetAooNoFromCharNo(0xa);
                break;
            default:
                u = -1;
                break;
        }
    }
    if (u == -1) {
        u = GetEnemyInSite(a);
        if (u == -1) {
            return;
        }
        if (CheckObjIsResource(u) == 1) {
            return;
        }
        switch (GetUnitType(a)) {
            case 1:
                if (GetUnitTypeByNo(u) != 4) {
                    return;
                }
                break;
            case 2:
                if (GetUnitTypeByNo(u) != 1) {
                    return;
                }
                break;
            case 3:
                if (GetUnitTypeByNo(u) != 2) {
                    return;
                }
                break;
            case 4:
                if (GetUnitTypeByNo(u) != 3) {
                    return;
                }
                break;
            case 5:
                if (GetUnitTypeByNo(u) != 5) {
                    return;
                }
                break;
            case 6:
                if (GetUnitTypeByNo(u) != 6) {
                    return;
                }
                break;
        }
    }
    if (distanceForBattle(u, a) == 1) {
        changeOcc(3, a, u, 0);
    } else {
        changeOcc(2, a, u, 0);
    }
}

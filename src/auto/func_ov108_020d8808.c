#include "m2c.h"

s32 GetUnitNoFromOrder(s32);
void ReadySetUpWaza(s32);
s32 IsItEnemy(s32, s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);
s32 GetNearDistance(s32, s32);
s32 GetAooNoFromCharNo(s32);
s32 GetAooFromUnitBaseNo(s32);
void ActionWazaByLogic(s32, s32, s32, s32);
s32 GetEnemyInOneUnitSite(s32);
void changeOccWithKihon(s32, s32, s32, s32);

void func_ov108_020d8808(s32 unit) {
    s32 no;
    no = GetUnitNoFromOrder(unit);
    ReadySetUpWaza(unit);
    if (IsItEnemy(unit, no) == 1) {
        if (distanceForBattle(no, unit) == 1) {
            changeOcc(3, unit, no, 0);
        } else {
            changeOcc(2, unit, no, 0);
        }
        return;
    }
    if (GetNearDistance(unit, 5) != 1) {
        return;
    }
    no = GetAooNoFromCharNo(3);
    if (distanceForBattle(no, unit) == 1) {
        changeOcc(3, unit, no, 0);
        return;
    }
    if (distanceForBattle(GetAooNoFromCharNo(0), unit) == 1) {
        if (unit == GetAooFromUnitBaseNo(0x11)) {
            ActionWazaByLogic(unit, 0xD, 0x132, -1);
            return;
        }
        if (unit == GetAooFromUnitBaseNo(0x38)) {
            ActionWazaByLogic(unit, 0xE, 0x131, -1);
            return;
        }
        if (unit == GetAooFromUnitBaseNo(0xB5)) {
            ActionWazaByLogic(unit, 0xE, 0x134, -1);
            return;
        }
        if (unit == GetAooFromUnitBaseNo(0x1B)) {
            ActionWazaByLogic(unit, 0xE, 0x130, -1);
            return;
        }
    }
    no = GetEnemyInOneUnitSite(unit);
    if (no == -1) {
        changeOccWithKihon(0, unit, 0, 0);
        return;
    }
    if (distanceForBattle(no, unit) == 1) {
        changeOcc(3, unit, no, 0);
        return;
    }
    changeOccWithKihon(0, unit, 0, 0);
}

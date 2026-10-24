#include "m2c.h"

void ReadySetUpWaza(s32);
s32 GetEnemyInOneUnitSite(s32);
s32 GetAooNoFromCharNo(s32);
void changeOcc(s32, s32, s32, s32);
s32 distanceForBattle(s32, s32);

void func_ov107_020dc3a8(s32 arg0) {
    s32 enemy;
    s32 aoo;
    ReadySetUpWaza(arg0);
    enemy = GetEnemyInOneUnitSite(arg0);
    if (enemy == -1) {
        aoo = GetAooNoFromCharNo(0xe);
        if (aoo == -1) {
            return;
        }
        changeOcc(6, arg0, aoo, 0);
        return;
    }
    if (distanceForBattle(enemy, arg0) == 1) {
        changeOcc(3, arg0, enemy, 0);
    } else {
        changeOcc(6, arg0, enemy, 0);
    }
}

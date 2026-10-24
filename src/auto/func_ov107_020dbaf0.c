#include "m2c.h"

void ReadySetUpWaza(s32);
s32 GetEnemyInOneUnitSite(s32);
s32 GetAooNoFromCharNo(s32);
s32 GetEnemyInSite(s32);
void changeOcc(s32, s32, s32, s32);
s32 distanceForBattle(s32, s32);

void func_ov107_020dbaf0(s32 arg0) {
    s32 enemy;
    ReadySetUpWaza(arg0);
    enemy = GetEnemyInOneUnitSite(arg0);
    if (enemy == -1) {
        enemy = GetAooNoFromCharNo(1);
        if (enemy == -1) {
            enemy = GetEnemyInSite(arg0);
            if (enemy == -1) {
                return;
            }
        }
    }
    if (distanceForBattle(enemy, arg0) == 1) {
        changeOcc(3, arg0, enemy, 0);
    } else {
        changeOcc(2, arg0, enemy, 0);
    }
}

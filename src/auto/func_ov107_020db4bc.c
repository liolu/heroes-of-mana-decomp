#include "m2c.h"

void ReadySetUpWaza(s32);
s32 GetEnemyInOneUnitSite(s32);
s32 GetAooNoFromCharNo(s32);
s32 GetEnemyInSite(s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);

void func_ov107_020db4bc(s32 a) {
    s32 e;
    ReadySetUpWaza(a);
    e = GetEnemyInOneUnitSite(a);
    if (e == -1) {
        e = GetAooNoFromCharNo(2);
        if (e == -1) {
            e = GetAooNoFromCharNo(5);
            if (e == -1) {
                e = GetEnemyInSite(a);
            }
            if (e == -1) {
                return;
            }
        }
    }
    if (distanceForBattle(e, a) == 1) {
        changeOcc(3, a, e, 0);
    } else {
        changeOcc(2, a, e, 0);
    }
}

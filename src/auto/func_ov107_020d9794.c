#include "m2c.h"
void ReadySetUpWaza(void *);
s32 GetEnemyInOneUnitSite(void *);
s32 GetAooNoFromCharNo(s32);
void changeOcc(s32, void *, s32, s32);
s32 distanceForBattle(s32, void *);
void func_ov107_020d9794(void *p) {
    s32 e;
    s32 a;
    ReadySetUpWaza(p);
    e = GetEnemyInOneUnitSite(p);
    if (e == -1) {
        a = GetAooNoFromCharNo(6);
        if (a == -1) {
            return;
        }
        changeOcc(2, p, a, 0);
        return;
    }
    if (distanceForBattle(e, p) == 1) {
        changeOcc(3, p, e, 0);
        return;
    }
    changeOcc(2, p, e, 0);
}

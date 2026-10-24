#include "m2c.h"
extern void ReadySetUpWaza(void *);
extern s32 GetEnemyInOneUnitSite(void *);
extern s32 GetAooNoFromCharNo(s32);
extern void ReOrderOrderUnit(void *);
extern s32 distanceForBattle(s32, void *);
extern void changeOcc(s32, void *, s32, s32);
void func_ov107_020dcb78(void *a) {
    s32 t;
    ReadySetUpWaza(a);
    t = GetEnemyInOneUnitSite(a);
    if (t == -1) {
        t = GetAooNoFromCharNo(0xa);
    }
    if (t == -1) {
        ReOrderOrderUnit(a);
        return;
    }
    if (distanceForBattle(t, a) == 1) {
        changeOcc(3, a, t, 0);
    } else {
        changeOcc(2, a, t, 0);
    }
}

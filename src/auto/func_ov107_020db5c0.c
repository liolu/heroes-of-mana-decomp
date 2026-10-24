#include "m2c.h"

extern s32 GetUnitOfFunc(s32, s32, s32, void *);
extern s32 GetAooNoFromCharNo(s32);
extern void changeOcc(s32, s32, s32, s32);
extern s32 GetNearDistance(s32, s32);
extern void ReadySetUpWaza(s32);
extern s32 GetEnemyInOneUnitSite(s32);
extern void ReOrderOrderUnit(s32);
extern s32 distanceForBattle(s32, s32);
extern void SearchGoddessOrHookWithShipFunc(void);

void func_ov107_020db5c0(s32 arg0) {
    s32 t;
    if (GetUnitOfFunc(arg0, 0, 0, SearchGoddessOrHookWithShipFunc) != GetAooNoFromCharNo(0x21)) {
        t = GetAooNoFromCharNo(0x21);
        if (t != -1) {
            changeOcc(2, arg0, t, 0);
            if (GetNearDistance(arg0, 3) == 0) {
                return;
            }
        }
    }
    ReadySetUpWaza(arg0);
    t = GetEnemyInOneUnitSite(arg0);
    if (t == -1) {
        ReOrderOrderUnit(arg0);
        return;
    }
    if (distanceForBattle(t, arg0) == 1) {
        changeOcc(3, arg0, t, 0);
    } else {
        changeOcc(2, arg0, t, 0);
    }
}

#include "m2c.h"

extern void ReadySetUpWaza(void *);
extern s32 GetEnemyInOneUnitSite(void *);
extern s32 GetEnemyInSite(void *);
extern s32 CheckObjIsResource(s32);
extern s32 GetUnitTypeByNo(s32);
extern s32 GetAooNoFromCharNo(s32);
extern s32 distanceForBattle(s32, void *);
extern void changeOcc(s32, void *, s32, s32);
extern s32 GetRnd(void);

void func_ov107_020def24(void *arg0) {
    s32 r;
    s32 x;

    ReadySetUpWaza(arg0);
    r = GetEnemyInOneUnitSite(arg0);
    if (r == -1) {
        r = GetEnemyInSite(arg0);
        if (r == -1) {
            return;
        }
        if (CheckObjIsResource(r) == 1) {
            return;
        }
        if (GetUnitTypeByNo(r) != 7) {
            r = GetAooNoFromCharNo(0xC);
        }
        if (r == -1) {
            return;
        }
    }
    if (distanceForBattle(r, arg0) == 1) {
        changeOcc(3, arg0, r, 0);
        return;
    }
    x = GetRnd();
    if (x % 100 >= ((u8 *) *(u8 **) ((u8 *) arg0 + 0xEC))[6]) {
        return;
    }
    changeOcc(6, arg0, r, 0);
}

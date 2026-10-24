#include "m2c.h"
extern s32 GetEnemyInOneUnitSite(s32);
extern s32 GetUnitTypeByNo(s32);
extern s32 GetEnemyInSite(s32);
extern s32 GetAooNoFromCharNo(s32);
extern void ReadySetUpWaza(s32);
extern s32 distanceForBattle(s32, s32);
extern void changeOcc(s32, s32, s32, s32);

void func_ov108_020d9d98(s32 a) {
    s32 r;
    s32 i = 0;
    r     = GetEnemyInOneUnitSite(a);
    if (r == -1 || GetUnitTypeByNo(r) == 5) {
        r = GetEnemyInSite(a);
    }
    if (r == -1 || GetUnitTypeByNo(r) == 5) {
        do {
            r = GetAooNoFromCharNo(i + 0xf24);
            if (r != -1) {
                break;
            }
            i++;
        } while (i < 0x14);
        if (r == -1) {
            return;
        }
    }
    ReadySetUpWaza(a);
    if (distanceForBattle(r, a) == 1) {
        changeOcc(3, a, r, 0);
    } else {
        changeOcc(6, a, r, 0);
    }
}

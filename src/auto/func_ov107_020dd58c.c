#include "m2c.h"

s32 GetEnemyInOneUnitSite(void *);
s32 GetUnitOfFunc(void *, s32, s32, void *);
s32 distanceForRecover(s32, void *);
s32 func_0202d478(s32, u16);
void changeOcc(s32, void *, s32, s32);
s32 GetAooNoFromCharNo(s32);
void ReadySetUpWaza(void *);
s32 distanceForBattle(s32, void *);
extern u8 SearchGoddessOrHookWithShipFunc;

void func_ov107_020dd58c(void *arg0) {
    s32 a = GetEnemyInOneUnitSite(arg0);
    s32 b;
    if (a == -1) {
        b = GetUnitOfFunc(arg0, 0, 1, &SearchGoddessOrHookWithShipFunc);
        if (b != -1 && distanceForRecover(b, arg0) == 1) {
            u8 *p = *(u8 **) ((u8 *) arg0 + 0xE8);
            if (func_0202d478(*(u16 *) (p + 0x10) * 0x64, *(u16 *) (p + 0x12)) < 0x64) {
                changeOcc(0, arg0, b, 0);
                return;
            }
        }
        b = GetAooNoFromCharNo(0x1A);
        if (b == -1) {
            return;
        }
        changeOcc(2, arg0, b, 0);
        return;
    }
    ReadySetUpWaza(arg0);
    if (distanceForBattle(a, arg0) == 1) {
        changeOcc(3, arg0, a, 0);
        return;
    }
    changeOcc(2, arg0, a, 0);
}

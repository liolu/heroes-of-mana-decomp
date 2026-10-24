#include "m2c.h"

extern s32 func_0202d478(s32, s32);
extern void ReadySetUpWaza(void *);
extern s32 GetEnemyInOneUnitSite(void *);
extern s32 GetAooNoFromCharNo(s32);
extern s32 distanceForBattle(s32, void *);
extern void changeOcc(s32, void *, s32, s32);

void func_ov107_020de17c(u8 *arg0) {
    s32 r4;
    r4 = GetEnemyInOneUnitSite(arg0);
    if (r4 == -1) {
        u8 *p = *(u8 **) (arg0 + 0xE8);
        if (func_0202d478(*(u16 *) (p + 0x10) * 100, *(u16 *) (p + 0x12)) >= 100) {
            return;
        }
        r4 = GetAooNoFromCharNo(11);
        if (r4 == -1) {
            return;
        }
    }
    ReadySetUpWaza(arg0);
    if (distanceForBattle(r4, arg0) == 1) {
        changeOcc(3, arg0, r4, 0);
        return;
    }
    changeOcc(2, arg0, r4, 0);
}

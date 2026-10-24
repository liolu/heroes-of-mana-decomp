#include "m2c.h"
void ReadySetUpWaza(void *);
s32 GetEnemyInOneUnitSite(void *);
s32 GetAooNoFromCharNo(s32);
void changeOcc(s32, void *, s32, s32);
s32 distanceForBattle(s32, void *);
s32 func_0202d478(s32, s32);
void func_ov107_020dccd4(u8 *p) {
    s32 e;
    u8 *s;
    ReadySetUpWaza(p);
    e = GetEnemyInOneUnitSite(p);
    s = *(u8 **) (p + 0xe8);
    if (func_0202d478(*(u16 *) (s + 0x10) * 100, *(u16 *) (s + 0x12)) < 0x50) {
        e = GetAooNoFromCharNo(1);
    }
    if (e == -1) {
        return;
    }
    if (distanceForBattle(e, p) == 1) {
        changeOcc(3, p, e, 0);
        return;
    }
    changeOcc(2, p, e, 0);
}

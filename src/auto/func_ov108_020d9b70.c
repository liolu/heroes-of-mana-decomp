#include "m2c.h"

void ReadySetUpWaza(void *);
s32 GetEnemyInOneUnitSite(void *);
s32 GetUnitTypeByNo(s32);
s32 GetEnemyInSite(void *);
s32 ShipIsAtHook(void *);
void changeOcc(s32, void *, s32, s32);
s32 distanceForBattle(s32, void *);
s32 func_0202d478(s32, u16);

void func_ov108_020d9b70(void *a0) {
    s32 e;
    ReadySetUpWaza(a0);
    e = GetEnemyInOneUnitSite(a0);
    if (e == -1 || GetUnitTypeByNo(e) == 3) {
        u8 *s;
        e = GetEnemyInSite(a0);
        s = *(u8 **) ((u8 *) a0 + 0xE8);
        if (func_0202d478(*(u16 *) (s + 0x10) * 0x64, *(u16 *) (s + 0x12)) >= 0x32) {
            if (e == -1) {
                return;
            }
            if (GetUnitTypeByNo(e) != 0) {
                return;
            }
        } else {
            if (e == -1 || GetUnitTypeByNo(e) != 7) {
                e = ShipIsAtHook(a0);
                if (e == -1) {
                    return;
                }
            }
        }
        changeOcc(2, a0, e, 0);
        return;
    }
    if (distanceForBattle(e, a0) == 1) {
        changeOcc(3, a0, e, 0);
        return;
    }
    changeOcc(2, a0, e, 0);
}

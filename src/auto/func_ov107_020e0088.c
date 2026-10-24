#include "m2c.h"

typedef struct UnitA {
    u8 pad[0xE8];
    u16 *stats;
} UnitA;

extern u8 SearchUnitFunc;
void ReadySetUpWaza(void *);
s32 GetEnemyInOneUnitSite(void *);
s32 GetAooNoFromCharNo(s32);
s32 GetUnitOfFunc(void *, s32, s32, void *);
s32 distanceForBattle(s32, void *);
void changeOcc(s32, void *, s32, s32);
s32 func_0202d478(s32, s32);

void func_ov107_020e0088(UnitA *arg0) {
    s32 r5;
    s32 t;
    ReadySetUpWaza(arg0);
    r5 = GetEnemyInOneUnitSite(arg0);
    if (r5 == -1) {
        u16 *s = arg0->stats;
        t      = func_0202d478(s[8] * 100, s[9]);
        if (t < 50) {
            r5 = GetAooNoFromCharNo(1);
            if (r5 == -1) {
                r5 = GetAooNoFromCharNo(0);
            }
            if (r5 == -1) {
                return;
            }
        } else if (t >= 80) {
            return;
        } else {
            r5 = GetUnitOfFunc(arg0, 1, 3, &SearchUnitFunc);
            if (r5 == -1) {
                return;
            }
        }
    }
    if (distanceForBattle(r5, arg0) == 1) {
        changeOcc(3, arg0, r5, 0);
        return;
    }
    changeOcc(2, arg0, r5, 0);
}

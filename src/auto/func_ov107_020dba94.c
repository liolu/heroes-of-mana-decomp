#include "m2c.h"
extern s32 GetNearDistance(s32 a, s32 k);
extern void ReadySetUpWazaAt(s32 a);
extern s32 distanceForBattle(s32 a, s32 b);
extern void changeOcc(s32 k, s32 a, s32 b, s32 c);
void func_ov107_020dba94(s32 a, s32 b) {
    if (GetNearDistance(a, 3) == 0) {
        return;
    }
    ReadySetUpWazaAt(a);
    if (distanceForBattle(b, a) == 1) {
        changeOcc(3, a, b, 0);
    } else {
        changeOcc(2, a, b, 0);
    }
}

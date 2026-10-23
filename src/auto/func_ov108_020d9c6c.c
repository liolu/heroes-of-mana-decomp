#include "m2c.h"
s32 GetUnitTypeByNo(s32);
void ReadySetUpWazaAt(s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);

void func_ov108_020d9c6c(s32 a, s32 b) {
    if (GetUnitTypeByNo(b) == 3) {
        return;
    }
    ReadySetUpWazaAt(a);
    if (distanceForBattle(b, a) == 1) {
        changeOcc(3, a, b, 0);
        return;
    }
    changeOcc(2, a, b, 0);
}

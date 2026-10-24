#include "m2c.h"
extern s32 GetUnitTypeByNo(s32);
extern s32 distanceForBattle(s32, s32);
extern void changeOcc(s32, s32, s32, s32);
s32 func_ov108_020d9e9c(s32 a, s32 b) {
    if (GetUnitTypeByNo(b) == 5) {
        return 0;
    }
    if (distanceForBattle(b, a) == 1) {
        changeOcc(3, a, b, 0);
        return 1;
    }
    changeOcc(2, a, b, 0);
    return 1;
}

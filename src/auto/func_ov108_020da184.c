#include "m2c.h"
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);
s32 func_ov108_020da184(s32 a, s32 b) {
    if (distanceForBattle(b, a) == 1) {
        changeOcc(3, a, b, 0);
        return 1;
    }
    changeOcc(2, a, b, 0);
    return 1;
}

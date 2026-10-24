#include "m2c.h"
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);
s32 GetUnitType(s32);
s32 GetUnitTypeByNo(s32);
s32 func_ov107_020d9420(s32 a, s32 b) {
    if (distanceForBattle(b, a) == 1) {
        changeOcc(3, a, b, 0);
        return 1;
    }
    switch (GetUnitType(a)) {
        case 1:
            if (GetUnitTypeByNo(b) != 4) {
                return 0;
            }
            break;
        case 2:
            if (GetUnitTypeByNo(b) != 1) {
                return 0;
            }
            break;
        case 3:
            if (GetUnitTypeByNo(b) != 2) {
                return 0;
            }
            break;
        case 4:
            if (GetUnitTypeByNo(b) != 3) {
                return 0;
            }
            break;
        case 5:
            if (GetUnitTypeByNo(b) != 5) {
                return 0;
            }
            break;
        case 6:
            if (GetUnitTypeByNo(b) != 6) {
                return 0;
            }
            break;
    }
    changeOcc(6, a, b, 0);
    return 1;
}

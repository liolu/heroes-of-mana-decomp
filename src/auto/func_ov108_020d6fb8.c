#include "m2c.h"
s32 GetUnitBaseNoByAoo(void *);
s32 distanceForBattle(s32, void *);
void changeOcc(s32, void *, s32, s32);
s32 GetUnitType(void *);
s32 GetUnitTypeByNo(s32);
s32 GetRnd(void);

s32 func_ov108_020d6fb8(void *a, s32 b) {
    if (GetUnitBaseNoByAoo(a) == 0x56 || GetUnitBaseNoByAoo(a) == 0x72) {
        return 0;
    }
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
        default:
            if (GetRnd() % 100 >= *(u8 *) (*(u8 **) ((u8 *) a + 0xec) + 6)) {
                return 0;
            }
            break;
    }
    changeOcc(2, a, b, 0);
    return 1;
}

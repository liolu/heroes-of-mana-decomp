#include "m2c.h"

typedef struct P {
    u8 pad[6];
    u8 rate;
} P;
typedef struct Unit {
    u8 pad[0xEC];
    P *p;
} Unit;

s32 GetUnitBaseNoByAoo(Unit *);
s32 distanceForBattle(s32, Unit *);
void changeOcc(s32, Unit *, s32, s32);
s32 GetUnitType(Unit *);
s32 GetUnitTypeByNo(s32);
s32 GetRnd(void);

s32 func_ov107_020d6fb8(Unit *u, s32 b) {
    if (GetUnitBaseNoByAoo(u) == 0x56 || GetUnitBaseNoByAoo(u) == 0x72) {
        return 0;
    }
    if (distanceForBattle(b, u) == 1) {
        changeOcc(3, u, b, 0);
        return 1;
    }
    switch (GetUnitType(u)) {
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
            if (GetRnd() % 100 >= u->p->rate) {
                return 0;
            }
            break;
    }
    changeOcc(2, u, b, 0);
    return 1;
}

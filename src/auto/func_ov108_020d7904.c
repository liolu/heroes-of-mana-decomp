#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 GetUnitBaseNoByAoo(void *);                    /* extern */
s32 GetUnitType(void *);                    /* extern */
s32 GetNearDistance(void *, M2C_UNK);           /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, void *);           /* extern */

s32 func_ov108_020d7904(void *arg0, M2C_UNK arg1) {
    M2C_UNK var_r1;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    if ((func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) < 0x1E) &&
        (GetUnitType(arg0) == 5)) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x32) {
        var_r1 = 1;
    } else {
        var_r1 = 5;
    }
    if (GetNearDistance(arg0, var_r1) == 0) {
        return 0;
    }
    if ((GetUnitBaseNoByAoo(arg0) == 0x56) || (GetUnitBaseNoByAoo(arg0) == 0x72)) {
        return 0;
    }
    if (distanceForBattle(arg1, arg0) == 1) {
        changeOcc(3, arg0, arg1, 0);
        return 1;
    }
    if ((GetUnitType(arg0) == 5) || (GetUnitType(arg0) == 6) ||
        (temp_r1_2 = M2C_FIELD(arg0, void **, 0xE8),
         (func_0202d478(M2C_FIELD(temp_r1_2, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1_2, u16 *, 0x12)) < 0x32))) {
        return 0;
    }
    if (GetNearDistance(arg0, 2) != 0) {
        return 0;
    }
    changeOcc(2, arg0, arg1, 0);
    return 1;
}

#include "m2c.h"

s32 GetUnitTypeByNo(M2C_UNK);                   /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, M2C_UNK);          /* extern */

s32 func_ov108_020d9cc8(M2C_UNK arg0, M2C_UNK arg1) {
    if ((distanceForBattle(arg1, arg0) == 1) && (GetUnitTypeByNo(arg1) != 3)) {
        changeOcc(3, arg0, arg1, 0);
        return 1;
    }
    if (GetUnitTypeByNo(arg1) == 3) {
        return 0;
    }
    changeOcc(2, arg0, arg1, 0);
    return 1;
}

#include "m2c.h"

s32 GetAooNoFromCharNo(M2C_UNK);                   /* extern */
s32 GetUnitTypeByNo(s32);                       /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, M2C_UNK);              /* extern */

s32 func_ov107_020df00c(M2C_UNK arg0, s32 arg1) {
    if ((GetUnitTypeByNo(arg1) != 7) && (arg1 != GetAooNoFromCharNo(0xC))) {
        return 0;
    }
    if (distanceForBattle(arg1, arg0) != 1) {
        return 0;
    }
    changeOcc(3, arg0, arg1, 0);
    return 1;
}

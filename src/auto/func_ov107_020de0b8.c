#include "m2c.h"

s32 GetAooNoFromCharNo(M2C_UNK);                   /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, M2C_UNK);              /* extern */

s32 func_ov107_020de0b8(M2C_UNK arg0, s32 arg1) {
    if (distanceForBattle(arg1, arg0) == 1) {
        changeOcc(3, arg0, arg1, 0);
        return 1;
    }
    if (arg1 != GetAooNoFromCharNo(0)) {
        return 0;
    }
    changeOcc(2, arg0, arg1, 0);
    return 1;
}

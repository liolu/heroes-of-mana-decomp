#include "m2c.h"

M2C_UNK changeOcc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, M2C_UNK);          /* extern */

void func_ov108_020d7f0c(M2C_UNK arg0, M2C_UNK arg1) {
    if (distanceForBattle(arg1, arg0) != 1) {
        return;
    }
    changeOcc(3, arg0, arg1, 0);
}

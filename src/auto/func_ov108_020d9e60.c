#include "m2c.h"

M2C_UNK changeOcc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK ReadySetUpWazaAt();                      /* extern */

void func_ov108_020d9e60(M2C_UNK arg0, M2C_UNK arg1) {
    ReadySetUpWazaAt();
    if (distanceForBattle(arg1, arg0) != 1) {
        return;
    }
    changeOcc(3, arg0, arg1, 0);
}

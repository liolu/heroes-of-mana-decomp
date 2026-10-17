#include "m2c.h"

s32 GetUnitTypeByNo(M2C_UNK);                   /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK ReadySetUpWazaAt();                      /* extern */

void func_ov108_020d9538(M2C_UNK arg0, M2C_UNK arg1) {
    ReadySetUpWazaAt();
    if (distanceForBattle(arg1, arg0) == 1) {
        changeOcc(3, arg0, arg1, 0);
        return;
    }
    if (GetUnitTypeByNo(arg1) != 5) {
        return;
    }
    changeOcc(2, arg0, arg1, 0);
}

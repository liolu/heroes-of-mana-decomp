#include "m2c.h"

M2C_UNK SetDestination(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, M2C_UNK);              /* extern */
s32 GetEnemyInOneUnitSite();                          /* extern */

void func_ov107_020da158(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = GetEnemyInOneUnitSite();
    if (temp_r0 == -1) {
        SetDestination(arg0, 0x1A, 6);
    }
    if (distanceForBattle(temp_r0, arg0) == 1) {
        changeOcc(3, arg0, temp_r0, 0);
        return;
    }
    SetDestination(arg0, 0x1A, 6);
}

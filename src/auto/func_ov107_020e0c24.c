#include "m2c.h"

u32 GetRnd();                          /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, M2C_UNK);              /* extern */
M2C_UNK ReadySetUpWaza();                      /* extern */
s32 GetEnemyInOneUnitSite(M2C_UNK);                   /* extern */

void func_ov107_020e0c24(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_ret;

    ReadySetUpWaza();
    temp_r0 = GetEnemyInOneUnitSite(arg0);
    if (temp_r0 == -1) {
        return;
    }
    if (distanceForBattle(temp_r0, arg0) != 1) {
        return;
    }
    temp_ret  = GetRnd();
    temp_r0_2 = temp_ret;
    if ((temp_ret % 100) >= 0x19) {
        return;
    }
    changeOcc(3, arg0, temp_r0, 0);
}

#include "m2c.h"

u32 GetRnd();                          /* extern */
M2C_UNK ActionWazaByLogic(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK ReadySetUpWazaAt();                      /* extern */

void func_ov107_020df958(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_ret;

    ReadySetUpWazaAt();
    if (distanceForBattle(arg1, arg0) == 1) {
        temp_ret = GetRnd();
        temp_r0  = temp_ret;
        if ((temp_ret % 100) >= 0x32) {
            return;
        }
        ActionWazaByLogic(arg0, 0xE, 0x131, -1);
        return;
    }
    changeOcc(2, arg0, arg1, 0);
}

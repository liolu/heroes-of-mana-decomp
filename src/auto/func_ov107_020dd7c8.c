#include "m2c.h"

u32 GetRnd();                          /* extern */
s32 GetAooNoFromCharNo(M2C_UNK);                   /* extern */
s32 GetUnitType(void *);                    /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, void *);               /* extern */
M2C_UNK ReadySetUpWaza();                      /* extern */
s32 GetEnemyInOneUnitSite(void *);                    /* extern */

void func_ov107_020dd7c8(void *arg0) {
    s32 var_r4;
    s32 temp_r0;
    s32 temp_ret;

    ReadySetUpWaza();
    var_r4 = GetEnemyInOneUnitSite(arg0);
    if ((var_r4 == -1) || (var_r4 == GetAooNoFromCharNo(0x18))) {
        if (GetUnitType(arg0) == 1) {
            var_r4 = GetAooNoFromCharNo(2);
        } else {
            var_r4 = GetAooNoFromCharNo(9);
        }
    }
    if (var_r4 == -1) {
        return;
    }
    if (distanceForBattle(var_r4, arg0) == 1) {
        changeOcc(3, arg0, var_r4, 0);
        return;
    }
    temp_ret = GetRnd();
    temp_r0  = temp_ret;
    if ((temp_ret % 100) >= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xEC), u8 *, 6)) {
        return;
    }
    changeOcc(6, arg0, var_r4, 0);
}

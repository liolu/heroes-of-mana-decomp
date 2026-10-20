#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 CheckObjIsResource(s32);                          /* extern */
s32 GetAooNoFromCharNo(M2C_UNK);                   /* extern */
s32 GetUnitTypeByNo(s32);                       /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, void *);               /* extern */
M2C_UNK ReadySetUpWaza();                      /* extern */
s32 GetEnemyInOneUnitSite(void *);                    /* extern */
s32 GetEnemyInSite(void *);                    /* extern */

void func_ov108_020d9fe8(void *arg0) {
    s32 var_r4;
    void *temp_r1;
    void *temp_r1_2;

    ReadySetUpWaza();
    var_r4 = GetEnemyInOneUnitSite(arg0);
    if (var_r4 == -1) {
        temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
        if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x50) {
            var_r4 = GetAooNoFromCharNo(1);
            if (var_r4 == -1) {
                var_r4 = GetEnemyInSite(arg0);
                if (var_r4 == -1) {
                    return;
                }
                if (CheckObjIsResource(var_r4) == 1) {
                    return;
                }
                if (GetUnitTypeByNo(var_r4) != 7) {
                    return;
                }
                goto block_10;
            }
            goto block_10;
        }
        changeOcc(0, arg0, 0, 0);
        return;
    }
block_10:
    if (distanceForBattle(var_r4, arg0) == 1) {
        changeOcc(3, arg0, var_r4, 0);
        return;
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1_2, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1_2, u16 *, 0x12)) > 0x50) {
        changeOcc(2, arg0, var_r4, 0);
        return;
    }
    changeOcc(0, arg0, 0, 0);
}

#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 distanceForRecover(s32, void *);               /* extern */
s32 GetAooNoFromCharNo(M2C_UNK);                   /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, void *);               /* extern */
s32 GetEnemyInOneUnitSite();                          /* extern */
s32 GetUnitOfFunc(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK SearchGoddessOrHookWithShipFunc;

void func_ov107_020dadf0(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    void *temp_r1;

    temp_r0 = GetEnemyInOneUnitSite();
    if (temp_r0 == -1) {
        temp_r0_2 = GetUnitOfFunc(arg0, 0, 1, &SearchGoddessOrHookWithShipFunc);
        if ((temp_r0_2 != -1) && (distanceForRecover(temp_r0_2, arg0) == 1)) {
            temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
            if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x64) {
                changeOcc(0, arg0, temp_r0_2, 0);
                return;
            }
        }
        temp_r0_3 = GetAooNoFromCharNo(7);
        if (temp_r0_3 == -1) {
            return;
        }
        changeOcc(2, arg0, temp_r0_3, 0);
        return;
    }
    if (distanceForBattle(temp_r0, arg0) == 1) {
        changeOcc(3, arg0, temp_r0, 0);
        return;
    }
    temp_r0_4 = GetAooNoFromCharNo(7);
    if (temp_r0_4 == -1) {
        return;
    }
    changeOcc(2, arg0, temp_r0_4, 0);
}

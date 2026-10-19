#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
M2C_UNK SetDestination(void *, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForRecover(s32, void *);               /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, void *);               /* extern */
M2C_UNK ReadySetUpWaza();                      /* extern */
s32 GetEnemyInOneUnitSite(void *);                    /* extern */
s32 GetUnitOfFunc(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK SearchGoddessOrHookWithShipFunc;

void func_ov107_020db938(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;
    void *temp_r1;
    void *temp_r3;
    void *temp_r4;

    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    temp_r4 = data_ov000_02051548;
    temp_r6 = M2C_FIELD(temp_r4, s32 *, 0x8C) & 0x4000;
    if ((func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) < 0x32) ||
        (temp_r6 == 0x4000)) {
        M2C_FIELD(temp_r4, s32 *, 0x8C) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x8C) | 0x4000);
        temp_r1                         = M2C_FIELD(arg0, void **, 0xE8);
        if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) > 0x5A) {
            M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) ^ 0x4000);
        }
        temp_r0 = GetUnitOfFunc(arg0, 0, 1, &SearchGoddessOrHookWithShipFunc);
        if (temp_r0 != -1) {
            if (distanceForRecover(temp_r0, arg0) == 1) {
                changeOcc(0, arg0, temp_r0, 0);
                return;
            }
            changeOcc(6, arg0, temp_r0, 0);
            return;
        }
        goto block_8;
    }
block_8:
    temp_r0_2 = GetEnemyInOneUnitSite(arg0);
    if (temp_r0_2 == -1) {
        SetDestination(arg0, 0x17, 0x15);
        return;
    }
    ReadySetUpWaza(arg0);
    if (distanceForBattle(temp_r0_2, arg0) == 1) {
        changeOcc(3, arg0, temp_r0_2, 0);
        return;
    }
    SetDestination(arg0, 0x17, 0x15);
}

#include "m2c.h"

s32 GetAooNoFromCharNo(M2C_UNK);                   /* extern */
M2C_UNK changeOcc(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, M2C_UNK);              /* extern */
M2C_UNK ReadySetUpWaza();                      /* extern */
s32 GetEnemyInOneUnitSite(M2C_UNK);                   /* extern */
extern M2C_UNK data_ov003_020b0dd8;

void func_ov107_020da1c4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    ReadySetUpWaza();
    temp_r0 = GetEnemyInOneUnitSite(arg0);
    if (temp_r0 == -1) {
        temp_r0_2 = GetAooNoFromCharNo(0x1E);
        if (temp_r0_2 == -1) {
            return;
        }
        if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_2 * 0x110)), u16 *, 0x10) >= 0x96U) {
            return;
        }
        changeOcc(2, arg0, temp_r0_2, 0);
        return;
    }
    if (distanceForBattle(temp_r0, arg0) == 1) {
        changeOcc(3, arg0, temp_r0, 0);
        return;
    }
    temp_r0_3 = GetAooNoFromCharNo(0x1E);
    if (temp_r0_3 == -1) {
        return;
    }
    if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_3 * 0x110)), u16 *, 0x10) >= 0x96U) {
        return;
    }
    changeOcc(2, arg0, temp_r0_3, 0);
}

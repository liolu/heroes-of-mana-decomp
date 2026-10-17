#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, void *);           /* extern */
M2C_UNK ReadySetUpWazaAt();                      /* extern */

void func_ov108_020da110(void *arg0, M2C_UNK arg1) {
    void *temp_r1;

    ReadySetUpWazaAt();
    if (distanceForBattle(arg1, arg0) == 1) {
        changeOcc(3, arg0, arg1, 0);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) <= 0x50) {
        return;
    }
    changeOcc(2, arg0, arg1, 0);
}

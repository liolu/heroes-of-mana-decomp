#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 GetAooNoFromCharNo(M2C_UNK);                   /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, void *);               /* extern */

s32 func_ov107_020df75c(void *arg0, s32 arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) < 0x28) {
        return 0;
    }
    if (distanceForBattle(arg1, arg0) == 1) {
        changeOcc(3, arg0, arg1, 0);
        return 1;
    }
    if (arg1 != GetAooNoFromCharNo(0)) {
        return 0;
    }
    changeOcc(2, arg0, arg1, 0);
    return 1;
}

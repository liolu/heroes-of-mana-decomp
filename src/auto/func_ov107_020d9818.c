#include "m2c.h"

u32 GetRnd();                          /* extern */
s32 GetNearDistance(void *, M2C_UNK);           /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, void *);           /* extern */
M2C_UNK ReadySetUpWazaAt(void *);                /* extern */

void func_ov107_020d9818(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_ret;

    if (GetNearDistance(arg0, 5) == 0) {
        changeOcc(0, arg0, 0, 0);
        return;
    }
    ReadySetUpWazaAt(arg0);
    if (distanceForBattle(arg1, arg0) == 1) {
        changeOcc(3, arg0, arg1, 0);
        return;
    }
    temp_ret = GetRnd();
    temp_r0  = temp_ret;
    if ((temp_ret % 100) >= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xEC), u8 *, 6)) {
        return;
    }
    changeOcc(2, arg0, arg1, 0);
}

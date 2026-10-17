#include "m2c.h"

u32 GetRnd();                          /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, void *);           /* extern */
M2C_UNK ReadySetUpWazaAt();                      /* extern */

void func_ov107_020d6f30(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_ret;

    ReadySetUpWazaAt();
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

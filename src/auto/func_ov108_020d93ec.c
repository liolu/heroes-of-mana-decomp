#include "m2c.h"

u32 GetRnd();                          /* extern */
s32 GetAooNoFromCharNo(M2C_UNK);                   /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, void *);               /* extern */

s32 func_ov108_020d93ec(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_ret;

    if (arg1 != GetAooNoFromCharNo(0xB)) {
        return 0;
    }
    if (distanceForBattle(arg1, arg0) == 1) {
        changeOcc(3, arg0, arg1, 0);
        return 1;
    }
    temp_ret = GetRnd();
    temp_r0  = temp_ret;
    if ((temp_ret % 100) >= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xEC), u8 *, 6)) {
        return 0;
    }
    changeOcc(6, arg0, arg1, 0);
    return 1;
}

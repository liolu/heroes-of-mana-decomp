#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
u32 GetRnd();                          /* extern */
M2C_UNK SetDestination(void *, s32, s32);      /* extern */
s32 ShipIsAtHook(void *);                    /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, s32, M2C_UNK); /* extern */

void func_ov107_020d9534(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_ret;
    s32 temp_ret_2;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) > 0x3C) {
        temp_r4  = GetRnd();
        temp_ret = GetRnd();
        temp_r0  = temp_ret;
        SetDestination(arg0, (temp_r4 % 5) + 0xB, (temp_ret % 10) + 5);
        return;
    }
    temp_r0_2 = ShipIsAtHook(arg0);
    if (temp_r0_2 == -1) {
        temp_r4_2  = GetRnd();
        temp_ret_2 = GetRnd();
        temp_r0_3  = temp_ret_2;
        SetDestination(arg0, (temp_r4_2 % 5) + 0xB, (temp_ret_2 % 10) + 5);
        return;
    }
    changeOcc(2, arg0, temp_r0_2, 0);
}

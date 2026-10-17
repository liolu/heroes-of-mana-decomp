#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
u32 GetRnd();                          /* extern */
M2C_UNK ReOrderOrderUnit(void *);                /* extern */
s32 GetUnitType(void *);                    /* extern */
s32 GetNearDistance(void *, M2C_UNK);           /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 distanceForBattle(M2C_UNK, void *);           /* extern */
M2C_UNK ReadySetUpWazaAt(void *);                /* extern */

void func_ov108_020d77dc(void *arg0, M2C_UNK arg1) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_ret;
    void *temp_r1;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) < 0x32) {
        var_r1 = 1;
    } else {
        var_r1 = 3;
    }
    if ((GetNearDistance(arg0, var_r1) == 0) &&
        ((GetUnitType(arg0) == 5) ||
         (temp_r1 = M2C_FIELD(arg0, void **, 0xE8),
          (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x32)))) {
        ReOrderOrderUnit(arg0);
        return;
    }
    ReadySetUpWazaAt(arg0);
    if (distanceForBattle(arg1, arg0) == 1) {
        changeOcc(3, arg0, arg1, 0);
        return;
    }
    temp_ret = GetRnd();
    temp_r0  = temp_ret;
    if (((temp_ret % 100) >= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xEC), u8 *, 6)) || (GetUnitType(arg0) == 5) ||
        (GetUnitType(arg0) == 6)) {
        ReOrderOrderUnit(arg0);
        return;
    }
    changeOcc(2, arg0, arg1, 0);
}

#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 GetAooNoFromCharNo(s32);                       /* extern */
M2C_UNK changeOcc(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 distanceForBattle(s32, void *);               /* extern */
extern M2C_UNK data_ov003_020b0dd8;

s32 func_ov107_020db050(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r4_2;
    s32 temp_r0_3;
    u8 var_r4;
    void *temp_r1;

    var_r4  = 0;
    temp_r0 = GetAooNoFromCharNo(0xF0F);
    if (temp_r0 == -1) {
        var_r4 = 1;
    } else if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0 * 0x110)), u16 *, 0x10) < 0x32U) {
        var_r4 = 1;
    }
    temp_r0_2 = GetAooNoFromCharNo(0xF10);
    if (temp_r0_2 == -1) {
        var_r4 |= 2;
    } else if ((u32) M2C_FIELD(*(s32 *) ((u8 *) &data_ov003_020b0dd8 + (temp_r0_2 * 0x110)), u16 *, 0x10) < 0x32U) {
        var_r4 |= 2;
    }
    temp_r1  = M2C_FIELD(arg0, void **, 0xE8);
    var_r4_2 = var_r4 & 3;
    if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x50) {
        var_r4_2 = 3;
    }
    temp_r0_3 = GetAooNoFromCharNo(0x19);
    if (temp_r0_3 != -1) {
        var_r4_2 = 3;
    }
    if (var_r4_2 == 3) {
        return 0;
    }
    if (distanceForBattle(temp_r0_3, arg0) != 1) {
        return 0;
    }
    changeOcc(3, arg0, temp_r0_3, 0);
    return 1;
}

#include "m2c.h"

s32 GetAooNoFromCharNo(s32);                       /* extern */
s32 distanceForBattle(s32, void *);               /* extern */
M2C_UNK SetWazaBySpOrNormal(void *, M2C_UNK);       /* extern */
extern void *data_0203673c;

s32 func_ov108_020d8a88(void *arg0) {
    s32 var_r0;
    s32 var_r5;
    void *temp_r1;

    SetWazaBySpOrNormal(arg0, 1);
    if (distanceForBattle(GetAooNoFromCharNo(3), arg0) == 1) {
        return 1;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (((u32) (M2C_FIELD(temp_r1, s32 *, 0) << 0xD) >> 0x18) == 7) {
        var_r0 = 0;
    } else if (((u32) (M2C_FIELD(((M2C_FIELD(temp_r1, u16 *, 0x16) * 0x14) + M2C_FIELD(data_0203673c, s32 *, 8)), s32 *, 0xC)
                       << 0x1A) >>
                0x1A) == 0x15) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 1) {
        return 0;
    }
    var_r5 = 0;
loop_10:
    if (distanceForBattle(GetAooNoFromCharNo(var_r5 + 0xF1B), arg0) == 1) {
        return 1;
    }
    var_r5 += 1;
    if (var_r5 >= 0xD) {
        return 0;
    }
    goto loop_10;
}

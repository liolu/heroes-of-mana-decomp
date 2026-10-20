#include "m2c.h"

s32 GetRnd();                          /* extern */
s32 GetUnitBaseNoByAoo(void *);                    /* extern */
s32 GetUnitType();                          /* extern */
s32 distanceForBattle(s32, void *);               /* extern */
M2C_UNK SetWazaBySpOrNormal(void *, M2C_UNK);       /* extern */
s32 GetFriendOfHalfHP(void *);                    /* extern */
s32 GetFriendOfAbnormal(void *);                    /* extern */
extern void *data_0203673c;

s32 func_ov107_020d71d0(void *arg0) {
    u32 temp_r0_3;
    void *temp_r0;
    s32 var_r0_3;
    u32 temp_r1;
    s32 var_r2;
    s32 temp_ret;
    s32 var_r0_2;
    s32 temp_r0_2;
    s32 var_r2_2;
    s32 var_r0;

    if (GetUnitType() == 6) {
        return 0;
    }
    if ((GetUnitBaseNoByAoo(arg0) == 0x22) || (GetUnitBaseNoByAoo(arg0) == 0x24) || (GetUnitBaseNoByAoo(arg0) == 0x26) || (GetUnitBaseNoByAoo(arg0) == 0x2A) || (GetUnitBaseNoByAoo(arg0) == 0x2C) || (GetUnitBaseNoByAoo(arg0) == 0x34) || (GetUnitBaseNoByAoo(arg0) == 0xB9) || (GetUnitBaseNoByAoo(arg0) == 0xBA)) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0xE8);
    temp_r1 = (u32) (M2C_FIELD(temp_r0, s32 *, 0) << 0xD) >> 0x18;
    if (temp_r1 == 7) {
        var_r2 = 0;
    } else if (((u32) (M2C_FIELD(((M2C_FIELD(temp_r0, u16 *, 0x16) * 0x14) + M2C_FIELD(data_0203673c, s32 *, 8)), s32 *, 8) << 0x1D) >> 0x1D) == 2) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 == 1) {
        if (temp_r1 == 7) {
            var_r2_2 = 0;
        } else if (((u32) (M2C_FIELD(((M2C_FIELD(temp_r0, u16 *, 0x16) * 0x14) + M2C_FIELD(data_0203673c, s32 *, 8)), s32 *, 0xC) << 0x1A) >> 0x1A) == 0x15) {
            var_r2_2 = 1;
        } else {
            var_r2_2 = 0;
        }
        if (var_r2_2 == 1) {
            temp_r0_2 = GetFriendOfHalfHP(arg0);
            if (temp_r0_2 == -1) {
                return 0;
            }
            SetWazaBySpOrNormal(arg0, 1);
            if (distanceForBattle(temp_r0_2, arg0) == 1) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
            return var_r0_2;
        }
        if (temp_r1 == 7) {
            var_r0_3 = 0;
        } else if (((u32) (M2C_FIELD(((M2C_FIELD(temp_r0, u16 *, 0x16) * 0x14) + M2C_FIELD(data_0203673c, s32 *, 8)), s32 *, 0xC) << 0x1A) >> 0x1A) == 0x16) {
            var_r0_3 = 1;
        } else {
            var_r0_3 = 0;
        }
        if (var_r0_3 == 1) {
            if (GetFriendOfAbnormal(arg0) != -1) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            return var_r0;
        }
        return 0;
    }
    temp_ret = GetRnd();
    temp_r0_3 = temp_ret;
    if ((s32) (temp_ret % 100) <= 5) {
        return 1;
    }
    return 0;
}

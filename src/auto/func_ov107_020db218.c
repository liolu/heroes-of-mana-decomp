#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 GetNowUnitKazu(s32);                       /* extern */
M2C_UNK changeOccWithKihon(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 GetHookAooNo(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK researchHookObj(void *);                /* extern */
s32 checkHookStatus(s32);                          /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov107_020db218(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r3;

    temp_r4 = M2C_FIELD(data_0203673c, s32 *, 0x28);
    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) >= 0x32) {
        return;
    }
    if (GetNowUnitKazu(temp_r4 + 0x2D0) < 7) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) | 1);
    }
    if (((u32) (M2C_FIELD(arg0, u16 *, 0xA8) << 0x10) >> 0x1E) != 2) {
        return;
    }
    if (GetNowUnitKazu(temp_r4 + 0x2D0) < 5) {
        return;
    }
    researchHookObj(arg0);
    temp_r0 = GetHookAooNo(arg0, 2, 0, 1);
    if (temp_r0 == -1) {
        return;
    }
    if (checkHookStatus(temp_r0) != -1) {
        return;
    }
    changeOccWithKihon(2, arg0, temp_r0, 0);
}

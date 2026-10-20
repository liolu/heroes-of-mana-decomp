#include "m2c.h"

M2C_UNK changeOccWithKihon(M2C_UNK, void *, s32, M2C_UNK); /* extern */
s32 GetHookAooNo(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK researchHookObj(void *);                 /* extern */
s32 checkHookStatus(s32);                       /* extern */

void func_ov107_020df2e8(void *arg0) {
    s32 temp_r0;

    if (((u32) (M2C_FIELD(arg0, u16 *, 0xA8) << 0x10) >> 0x1E) != 2) {
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


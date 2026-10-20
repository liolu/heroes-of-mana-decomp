#include "m2c.h"

void *func_ov120_020f16dc(M2C_UNK);                 /* extern */

u32 func_ov120_020f1740(u32 arg0, M2C_UNK arg1) {
    void *temp_r0;

    temp_r0 = func_ov120_020f16dc(arg1);
    if (temp_r0 == NULL) {
        return 0U;
    }
    switch (arg0) {
    case 4:
        return (u32) (M2C_FIELD(temp_r0, s32 *, 8) << 0x1F) >> 0x1F;
    case 5:
        return (u32) (M2C_FIELD(temp_r0, s32 *, 0xC) << 0x1F) >> 0x1F;
    case 2:
        return (u32) (M2C_FIELD(temp_r0, s32 *, 0xC) << 0xF) >> 0x1F;
    case 1:
        return (u32) (M2C_FIELD(temp_r0, s32 *, 8) << 0xF) >> 0x1F;
    case 0:
    case 3:
    default:
        return 0U;
    }
}

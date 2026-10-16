#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_ov120_020f4200;

u32 func_ov120_020ea9e8(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov120_020f4200, s32 *, 0x2C) << 5) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov120_020f4200, s32 *, 0xC4));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov120_020f4200, s32 *, 0xC8));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov120_020f4200, s32 *, 0xCC));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov120_020f4200, s32 *, 0xD0));
    M2C_FIELD(&data_ov120_020f4200, s32 *, 0x2C) = (s32) (M2C_FIELD(&data_ov120_020f4200, s32 *, 0x2C) & ~0x04000000);
    return (u32) &data_ov120_020f4200;
}

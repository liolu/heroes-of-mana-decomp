#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_ov121_020f5b80;
extern M2C_UNK data_ov121_020f6b80;

u32 func_ov121_020ea5d8(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov121_020f5b80, s32 *, 0xA88) << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov121_020f6b80, s32 *, 0x1D0));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov121_020f6b80, s32 *, 0x1D4));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov121_020f6b80, s32 *, 0x1D8));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov121_020f6b80, s32 *, 0x1DC));
    M2C_FIELD(&data_ov121_020f5b80, s32 *, 0xA88) = (s32) (M2C_FIELD(&data_ov121_020f5b80, s32 *, 0xA88) & ~2);
    return (u32) &data_ov121_020f5b80;
}

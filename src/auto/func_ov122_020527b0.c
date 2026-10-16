#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_ov122_02062b20;

u32 func_ov122_020527b0(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov122_02062b20, s32 *, 8) << 0xE) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov122_02062b20, s32 *, 0xA8));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov122_02062b20, s32 *, 0xAC));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov122_02062b20, s32 *, 0xB0));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov122_02062b20, s32 *, 0xB4));
    M2C_FIELD(&data_ov122_02062b20, s32 *, 8) = (s32) (M2C_FIELD(&data_ov122_02062b20, s32 *, 8) & ~0x20000);
    return (u32) &data_ov122_02062b20;
}

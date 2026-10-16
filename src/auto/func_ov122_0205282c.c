#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_ov122_02065b20;

u32 func_ov122_0205282c(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(&data_ov122_02065b20, s32 *, 0x8C4) << 0x1C) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov122_02065b20, s32 *, 0x920));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov122_02065b20, s32 *, 0x924));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov122_02065b20, s32 *, 0x928));
    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov122_02065b20, s32 *, 0x92C));
    M2C_FIELD(&data_ov122_02065b20, s32 *, 0x8C4) = (s32) (M2C_FIELD(&data_ov122_02065b20, s32 *, 0x8C4) & ~8);
    return (u32) &data_ov122_02065b20;
}

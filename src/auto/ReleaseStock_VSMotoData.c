/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);            /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa4dc;

void ReleaseStock_VSMotoData(void) {
    s32 temp_r2;
    s32 temp_r2_2;

    temp_r2 = M2C_FIELD(data_ov000_02051548, s32 *, 0x764);
    if (temp_r2 != 0) {
        if (temp_r2 != 0) {
            OS_FreeToHeap(0, -1, temp_r2);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x764) = 0;
        }
        M2C_FIELD(data_ov000_02051548, s32 *, 0x764) = 0;
    }
    temp_r2_2 = M2C_FIELD(data_ov000_02051548, s32 *, 0x768);
    if (temp_r2_2 != 0) {
        if (temp_r2_2 != 0) {
            OS_FreeToHeap(0, -1, temp_r2_2);
            M2C_FIELD(data_ov000_02051548, s32 *, 0x768) = 0;
        }
        M2C_FIELD(data_ov000_02051548, s32 *, 0x768) = 0;
    }
    M2C_FIELD(data_ov000_02051548, s32 *, 0x76C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x76C) & ~0xFF);
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s32 data_ov109_020ea340;

void ReleaseUnitListGraDataOne(s32 arg0) {
    s32 temp_r2;
    s32 temp_r4;

    temp_r4 = arg0 * 12;
    temp_r2 = M2C_FIELD(data_ov109_020ea340 + temp_r4, s32 *, 0x2EC);
    if (temp_r2 != 0) {
        if (temp_r2 != 0) {
            OS_FreeToHeap(0, -1, temp_r2);
            M2C_FIELD(data_ov109_020ea340 + temp_r4, s32 *, 0x2EC) = 0;
        }
        if (M2C_FIELD(data_ov109_020ea340 + temp_r4, s32 *, 0x2F0) != 0) {
            OS_FreeToHeap(0, -1, M2C_FIELD(data_ov109_020ea340 + temp_r4, s32 *, 0x2F0));
            M2C_FIELD(data_ov109_020ea340 + temp_r4, s32 *, 0x2F0) = 0;
        }
        M2C_FIELD(data_ov109_020ea340 + temp_r4, s32 *, 0x2EC) = 0;
        M2C_FIELD(data_ov109_020ea340 + temp_r4, s32 *, 0x2F0) = 0;
    }
}

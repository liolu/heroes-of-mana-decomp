/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void *searchGundanLeaderObj(u32);                     /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a88ec;

void ChangeCamera2MyKuniLeader(void) {
    void *temp_r0;

    temp_r0 = searchGundanLeaderObj((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C);
    if (temp_r0 != NULL) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x1C0) = (s32) M2C_FIELD(temp_r0, s32 *, 0x40);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x1C4) =
            (s32) (M2C_FIELD(temp_r0, s32 *, 0x44) + M2C_FIELD(temp_r0, s32 *, 0x4C) + 0x2800);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x1C8)   = (s32) M2C_FIELD(temp_r0, s32 *, 0x48);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x1CC)   = 1;
        M2C_FIELD(data_ov000_02051548, void **, 0x1D0) = temp_r0;
    }
}

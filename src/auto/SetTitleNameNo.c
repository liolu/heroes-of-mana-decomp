/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac390;

void SetTitleNameNo(M2C_UNK arg0) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) =
        (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & 0x801FFFFF) | ((u32) (arg0 << 0x16) >> 1));
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3C) = 0;
}

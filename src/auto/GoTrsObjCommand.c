/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK SetBigTrans(u32 *, s32, M2C_UNK, M2C_UNK); /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa7ac;

void GoTrsObjCommand(void) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(data_ov000_02051548, u32 *, 0x26C);
    if (temp_r3 > 1U) {
        *M2C_FIELD(data_ov000_02051548, u32 **, 0x268) = temp_r3;
        SetBigTrans(M2C_FIELD(data_ov000_02051548, u32 **, 0x268), M2C_FIELD(data_ov000_02051548, u32 *, 0x26C) * 4, 0, 1);
        M2C_FIELD(data_ov000_02051548, u32 *, 0x26C) = 1U;
    }
}

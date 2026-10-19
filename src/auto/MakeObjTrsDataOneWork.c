/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200ed38(M2C_UNK, M2C_UNK, s32);           /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa7cc;

void MakeObjTrsDataOneWork(void) {
    s32 temp_r2;
    temp_r2 = M2C_FIELD(data_ov000_02051548, s32 *, 0x4C0);
    if (temp_r2 != 0) {
        OS_FreeToHeap(0, -1, temp_r2);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x4C0) = 0;
    }
    M2C_FIELD(data_ov000_02051548, s32 *, 0x4C0) = func_0200ed38(0, -1, 0x804);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x4C4) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x4C0) + 4);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x4D0) = 0;
}

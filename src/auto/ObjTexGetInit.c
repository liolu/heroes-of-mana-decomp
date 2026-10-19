/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 *func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a83d4;

void ObjTexGetInit(void) {
    s32 *temp_r2;
    s32 *temp_r2_2;

    M2C_FIELD(data_ov000_02051548, s32 **, 0x270)  = func_0200ed38(0, -1, 0xC);
    temp_r2                                        = M2C_FIELD(data_ov000_02051548, s32 **, 0x270);
    M2C_FIELD(temp_r2, s32 *, 4)                   = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~0x40000000);
    *M2C_FIELD(data_ov000_02051548, s32 **, 0x270) = 0;
    temp_r2_2                                      = M2C_FIELD(data_ov000_02051548, s32 **, 0x270);
    M2C_FIELD(temp_r2_2, s32 *, 4)                 = (s32) ((M2C_FIELD(temp_r2_2, s32 *, 4) & 0xC0000000) | 0x40000);
    M2C_FIELD(M2C_FIELD(data_ov000_02051548, s32 **, 0x270), s32 *, 8) = 0;
}

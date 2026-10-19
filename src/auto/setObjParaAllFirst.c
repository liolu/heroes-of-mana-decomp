/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aa8f0;
extern void *data_ov003_020b5328;
extern M2C_UNK ObjParaSetFirst;

void setObjParaAllFirst(void) {
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x10)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x10) | 4);
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x10)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x10) | 8);
    M2C_FIELD(data_ov003_020b5328, M2C_UNK **, 0x1C) = &ObjParaSetFirst;
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x10)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x10) & 0xFFF0000F);
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x10)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x10) & ~1);
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x10)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x10) & ~2);
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x14)      = 0;
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x18)      = 0;
}

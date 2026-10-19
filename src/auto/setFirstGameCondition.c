/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aa8d8;
extern void *data_ov003_020b5328;
extern M2C_UNK ObjParaSetFirstForParent;

void setFirstGameCondition(void) {
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x20)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x20) | 4);
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x20)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x20) | 8);
    M2C_FIELD(data_ov003_020b5328, M2C_UNK **, 0x2C) = &ObjParaSetFirstForParent;
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x20)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x20) & 0xFFF0000F);
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x20)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x20) & ~1);
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x20)      = (s32) (M2C_FIELD(data_ov003_020b5328, s32 *, 0x20) & ~2);
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x24)      = 0;
    M2C_FIELD(data_ov003_020b5328, s32 *, 0x28)      = 0;
}

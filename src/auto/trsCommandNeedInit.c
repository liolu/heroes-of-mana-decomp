/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020aa760;
extern M2C_UNK data_ov003_020b54e8;
extern M2C_UNK commandToMove;

void trsCommandNeedInit(void) {
    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) =
        (s32) (M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) | 4);
    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) =
        (s32) (M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) | 8);
    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), M2C_UNK **, 0xC) = &commandToMove;
    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) =
        (s32) (M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) & 0xFFF0000F);
    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) =
        (s32) (M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) & ~1);
    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) =
        (s32) (M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 0) & ~2);
    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 4) = 0;
    M2C_FIELD(M2C_FIELD(&data_ov003_020b54e8, void **, 0x2C), s32 *, 8) = 0;
}

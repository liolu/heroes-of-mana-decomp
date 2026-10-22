/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_0203673c;
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac974;

void InitResultData(s32 arg4) {
    s32 *temp_ip;
    s32 *temp_r1;
    s32 *temp_r1_2;
    s32 *temp_r1_3;
    s32 *temp_r2;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r5;

    temp_ip = M2C_FIELD(data_0203673c, s32 **, 0x30);
    *temp_ip &= 0xFFFFF003;
    M2C_FIELD(M2C_FIELD(data_0203673c, s32 **, 0x30), s32 *, 4)  = 0;
    M2C_FIELD(M2C_FIELD(data_0203673c, s32 **, 0x30), s8 *, 8)   = 0;
    M2C_FIELD(M2C_FIELD(data_0203673c, s32 **, 0x30), s8 *, 9)   = 0;
    M2C_FIELD(M2C_FIELD(data_0203673c, s32 **, 0x30), s8 *, 0xA) = 0;
    M2C_FIELD(M2C_FIELD(data_0203673c, s32 **, 0x30), s8 *, 0xB) = 0;
    temp_r5                                                      = M2C_FIELD(data_0203673c, s32 **, 0x30);
    *temp_r5 &= 0xFFC00FFF;
    temp_r2                           = M2C_FIELD(data_0203673c, s32 **, 0x30);
    M2C_FIELD(temp_r2, s32 *, 0xC)    = (s32) (M2C_FIELD(temp_r2, s32 *, 0xC) & ~0x3FFF);
    temp_r2_2                         = M2C_FIELD(data_0203673c, s32 **, 0x30);
    M2C_FIELD(temp_r2_2, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r2_2, s32 *, 0x10) & ~0x3FC000);
    temp_r2_3                         = M2C_FIELD(data_0203673c, s32 **, 0x30);
    *temp_r2_3 &= 0x3FFFFF;
    temp_r1                                     = M2C_FIELD(data_0203673c, s32 **, 0x30);
    M2C_FIELD(temp_r1, s32 *, 0xC)              = (s32) (M2C_FIELD(temp_r1, s32 *, 0xC) & 0xF0003FFF);
    temp_r1_2                                   = M2C_FIELD(data_0203673c, s32 **, 0x30);
    M2C_FIELD(temp_r1_2, s32 *, 0x10)           = (s32) (M2C_FIELD(temp_r1_2, s32 *, 0x10) & ((s32) 0xF0003FFF >> 14));
    temp_r1_3                                   = M2C_FIELD(data_0203673c, s32 **, 0x30);
    M2C_FIELD(temp_r1_3, s32 *, 0x10)           = (s32) (M2C_FIELD(temp_r1_3, s32 *, 0x10) & ~0x3FC00000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1000);
}

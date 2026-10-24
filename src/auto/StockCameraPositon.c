/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void MIi_CpuCopy16(void *, void *, s32);

typedef struct {
    u32 pad0[5];
    u32 lo : 18;
    u32 f : 1;
    u32 hi : 13;
    u32 pad1[0x1b0 / 4 - 6 - 0];
} A;

typedef struct {
    u8 pad0[0x14];
    u32 w14;
    u8 pad1[8];
    u32 w20;
    u8 pad2[0x1b4 - 0x24];
    u8 v1b4[12];
    u32 w1c0[4];
    u32 w1d0;
    u8 pad3[0xc];
    u32 w1e0;
    u32 w1e4;
    u32 w1e8;
    u8 pad4[0x224 - 0x1ec];
    u32 w224;
    u32 w228;
    u32 w22c;
    u32 w230;
    u8 v234[12];
} G;

typedef struct {
    u8 pad[0x14];
    u32 lo : 13;
    u32 f : 1;
    u32 hi : 18;
    u8 pad2[8];
    u32 b0 : 28;
    u32 g : 1;
    u32 b1 : 3;
} H;

extern G *data_ov000_02051548;

void StockCameraPositon(void) {
    data_ov000_02051548->w224 = data_ov000_02051548->w1d0;
    data_ov000_02051548->w228 = data_ov000_02051548->w1e0;
    data_ov000_02051548->w22c = data_ov000_02051548->w1e4;
    data_ov000_02051548->w230 = data_ov000_02051548->w1e8;
    MIi_CpuCopy16(data_ov000_02051548->v1b4, data_ov000_02051548->v234, 12);
    ((H *) data_ov000_02051548)->g = ((H *) data_ov000_02051548)->f;
}

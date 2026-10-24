/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad0[0x10];
    u32 p10 : 28;
    u32 b : 1;
    u32 a : 1;
    u32 r10 : 2;
    u8 pad1[0xc];
    u32 icon : 3;
    u32 r20 : 29;
    u8 pad2[0x190];
    s32 f1b4;
    s32 f1b8;
    s32 f1bc;
    s32 f1c0;
    s32 f1c4;
    s32 f1c8;
    s32 f1cc;
    u8 pad3[8];
    s32 f1d8;
    u8 pad4[4];
    s32 f1e0;
    s32 f1e4;
    s32 f1e8;
    u8 pad5[0x24];
    s32 f210;
    u8 pad6[4];
    s32 f218;
    u8 pad7[4];
    s32 f220;
    u8 pad8[0x34];
    u16 f258;
    u8 pad9[0x242];
    s32 f49c;
    s32 f4a0;
    s16 f4a4;
} G;
typedef struct {
    u32 w0;
    u32 w4;
    u32 w8;
    u32 wc;
} Row;
s32 GetCompasIconAtai(void);
extern G *data_ov000_02051548;
extern Row data_ov003_020ad4c4[];

void SetFirstEyePosition(void) {
    data_ov000_02051548->f210 = 0;
    data_ov000_02051548->f218 = 0;
    data_ov000_02051548->f220 = 0;
    if (data_ov000_02051548->a != 0) {
        if (data_ov000_02051548->b != 0) {
            data_ov000_02051548->f1e0 = 0x41A;
        } else {
            data_ov000_02051548->f1e0 = 0x2EE;
        }
    } else {
        data_ov000_02051548->f1e0 = 0x2EE;
    }
    data_ov000_02051548->icon = GetCompasIconAtai();
    data_ov000_02051548->f1e4 = 0xBE;
    data_ov000_02051548->f1e8 = 0x3E8;
    data_ov000_02051548->f49c = 0x2CA4;
    data_ov000_02051548->f4a0 = 0x9000;
    data_ov000_02051548->f4a4 = *(u32 *) ((u8 *) data_ov003_020ad4c4 + data_ov000_02051548->f258 * 0x10 + 4) >> 0x10;
    data_ov000_02051548->f1bc = 0;
    data_ov000_02051548->f1b4 = data_ov000_02051548->f1bc;
    data_ov000_02051548->f1b8 = 0xA000;
    data_ov000_02051548->f1c0 = data_ov000_02051548->f1b4;
    data_ov000_02051548->f1c4 = data_ov000_02051548->f1b8;
    data_ov000_02051548->f1c8 = data_ov000_02051548->f1bc;
    data_ov000_02051548->f1cc = 0;
}

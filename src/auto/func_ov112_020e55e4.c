#include "m2c.h"

typedef struct {
    u32 w0;
    u8 pad[0x43c];
    s32 f440;
    u8 pad2[8];
    s32 f44c;
} G;

extern G data_ov112_020ec588;
extern u32 data_ov112_020eca1c[];

void func_ov112_020e2830(s32, s32, s32);
void func_ov112_020e522c(void);
void G2x_SetBlendBrightness_(void *, s32, s32);
void GXx_SetMasterBrightness_(void *, s32);
void *G2_GetBG2ScrPtr(void);
void *G2S_GetBG2ScrPtr(void);
void MIi_CpuCopy16(void *, void *, s32);
void func_ov112_020e17c4(s32, s32, s32, s32, s32);
void func_ov112_020e4438(s32, s32, s32, s32, s32);
void func_ov112_020e44fc(s32, s32, s32, s32, s32);
void func_ov112_020e449c(s32, s32, s32, s32, s32);
void func_ov112_020e4684(s32, s32, s32, s32, s32);
void func_ov112_020e4748(s32, s32, s32, s32, s32);
void func_ov112_020e46e8(s32, s32, s32, s32, s32);
void func_ov112_020e47ac(s32, s32, s32, s32, s32);
void func_ov112_020e4878(s32, s32, s32, s32, s32);
void func_ov112_020e4814(s32, s32, s32, s32, s32);
void func_ov112_020e48e0(s32, s32, s32, s32, s32, s32);
void func_ov112_020e2a4c(s32);
void func_0200acd8(void *, s32, s32, s32, s32);
void func_ov112_020e278c(s32, s32, s32);

void func_ov112_020e55e4(s32 a, s32 mode) {
    s32 x;
    s32 y;
    void *p;

    func_ov112_020e2830(-6, 1, 2);
    func_ov112_020e522c();
    *(u16 *) 0x4000050 = 0;
    G2x_SetBlendBrightness_((void *) 0x4000050, 0x1b, -6);
    GXx_SetMasterBrightness_((void *) 0x400006c, 0);
    *(u32 *) 0x4000000 = (*(u32 *) 0x4000000 & ~0x1f00) | 0x1b00;
    if ((u32) (mode - 9) <= 1) {
        MIi_CpuCopy16((void *) data_ov112_020ec588.f440, G2_GetBG2ScrPtr(), 0x800);
    } else {
        MIi_CpuCopy16((void *) data_ov112_020ec588.f44c, G2_GetBG2ScrPtr(), 0x800);
    }
    func_ov112_020e17c4(0, 1, 2, 0, 3);
    x                      = 0;
    y                      = 0;
    data_ov112_020ec588.w0 = 0x300;
    switch (mode) {
        case 6:
            func_ov112_020e4438(2, 8, data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] >> 16, 1, 2);
            func_ov112_020e44fc(2, 0xa, data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] >> 16, 1, 2);
            func_ov112_020e449c(2, 0xc, data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] >> 16, 1, 2);
            break;
        case 7:
            func_ov112_020e4684(2, 8, data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] >> 16, 1, 2);
            func_ov112_020e4748(2, 0xa, data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] >> 16, 1, 2);
            func_ov112_020e46e8(2, 0xc, data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] >> 16, 1, 2);
            break;
        case 8:
            func_ov112_020e47ac(2, 8, (data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] << 16) >> 24, 1, 2);
            func_ov112_020e4878(2, 0xa, (data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] << 16) >> 24, 1, 2);
            func_ov112_020e4814(2, 0xc, (data_ov112_020eca1c[a + *((u8 *) data_ov112_020eca1c + 0xd52)] << 16) >> 24, 1, 2);
            break;
        case 9:
            y = 1;
            func_ov112_020e48e0(7, 8, y, y, 2, x);
            break;
        case 10:
            y = 1;
            func_ov112_020e48e0(7, 8, 8, y, 2, x);
            break;
        default:
            break;
    }
    *(u32 *) 0x4000000 = (*(u32 *) 0x4000000 & ~0x1f00) | 0x1f00;
    func_ov112_020e2a4c(y);
    func_ov112_020e522c();
    GXx_SetMasterBrightness_((void *) 0x400006c, -6);
    G2x_SetBlendBrightness_((void *) 0x4000050, 0x1b, 0);
    func_0200acd8((void *) 0x4000050, 4, 8, 9, 0xe);
    func_ov112_020e17c4(0, 0, 1, 2, 3);
    *(u32 *) 0x4000000 = (*(u32 *) 0x4000000 & ~0x1f00) | 0x1f00;
    p                  = G2_GetBG2ScrPtr();
    MIi_CpuCopy16((u8 *) G2S_GetBG2ScrPtr() + 0x800, p, 0x800);
    func_ov112_020e278c(-6, 1, 2);
}

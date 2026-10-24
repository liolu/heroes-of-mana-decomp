#include "m2c.h"
typedef struct {
    u8 p[0xa40];
    s32 f40;
    u32 mode;
    u32 f48;
} G;
extern G data_ov121_020f6d60;
extern u32 data_ov121_020f6608;
extern void func_ov121_020f2b54(void);
extern void GXx_SetMasterBrightness_(s16 *, s32);
extern void G2x_SetBlendBrightness_(void *, s32, s32);
extern void func_0200acd8(s32 *, s32, s32, s32, s32);
extern void func_ov121_020e9ac8(s32, s32, s32, s32, s32);
extern u8 *G2_GetBG2ScrPtr(void);
extern u8 *G2S_GetBG2ScrPtr(void);
extern void MIi_CpuCopy16(void *, void *, s32);
extern void func_ov121_020ec628(s32, s32, s32);

void func_ov121_020f3af8(void) {
    u8 *dst;
    switch (data_ov121_020f6d60.mode) {
        case 1:
            data_ov121_020f6d60.f40 = 1;
            data_ov121_020f6608 &= ~0x10;
            break;
        case 2:
            data_ov121_020f6d60.f40 = 1;
            data_ov121_020f6608 &= ~0x20;
            break;
        case 3:
            data_ov121_020f6d60.f40 = 1;
            data_ov121_020f6608 &= ~0x40;
            break;
        case 0:
            data_ov121_020f6d60.f40 = 1;
            data_ov121_020f6608 &= ~0x40;
            break;
        default:
            break;
    }
    *(volatile u32 *) 0x04000000 &= ~0xe000;
    func_ov121_020f2b54();
    GXx_SetMasterBrightness_((s16 *) 0x0400006c, -6);
    G2x_SetBlendBrightness_((void *) 0x04000050, 0x1b, 0);
    func_0200acd8((s32 *) 0x04000050, 4, 8, 9, 0xe);
    func_ov121_020e9ac8(0, 0, 1, 2, 3);
    *(volatile u32 *) 0x04000000 = (*(volatile u32 *) 0x04000000 & ~0x1f00) | 0x1f00;
    dst                          = G2_GetBG2ScrPtr();
    MIi_CpuCopy16(G2S_GetBG2ScrPtr() + 0x800, dst, 0x800);
    func_ov121_020ec628(-6, 1, 2);
    data_ov121_020f6d60.f48 &= ~0x80000000;
}

#include "m2c.h"

typedef struct W {
    s32 w0;
    u8 pad[0x598 - 4];
    s32 w598;
} W;
typedef struct B {
    u32 v : 8;
    u32 r : 24;
} B;
extern W data_ov116_020e71a8;
extern B data_ov116_020e7180;
void func_ov116_020e2278(s32, s32);
void G2x_SetBlendBrightness_(void *, s32, s32);
void GXx_SetMasterBrightness_(void *, s32);
void *G2_GetBG2ScrPtr(void);
void *G2S_GetBG2ScrPtr(void);
void MIi_CpuCopy16(s32, void *, s32);
void func_ov116_020e15c0(s32, s32, s32, s32, s32);
void func_ov116_020e4728(s32, s32, s32, s32, s32);
void func_ov116_020e47ec(s32, s32, s32, s32, s32);
void func_ov116_020e478c(s32, s32, s32, s32, s32);
void func_ov116_020e48b4(s32, s32, s32, s32, s32);
void func_ov116_020e3b10(void);
void VBlankIntrWaitInGame(void);
s32 func_ov116_020e4374(s32);
void func_ov116_020e4304(void);
void func_0200acd8(void *, s32, s32, s32, s32);
void func_ov116_020e21d4(s32, s32);

void func_ov116_020e43f8(s32 a, s32 mode) {
    void *p;
    func_ov116_020e2278(-6, 1);
    *(u16 *) 0x4000050 = 0;
    G2x_SetBlendBrightness_((void *) 0x4000050, 27, -6);
    GXx_SetMasterBrightness_((void *) 0x400006c, 0);
    *(u32 *) 0x4000000 = (*(u32 *) 0x4000000 & ~0x1f00) | 0x1b00;
    MIi_CpuCopy16(data_ov116_020e71a8.w598, G2_GetBG2ScrPtr(), 0x800);
    func_ov116_020e15c0(0, 1, 2, 0, 3);
    data_ov116_020e71a8.w0 = 0x200;
    switch (mode) {
        case 0:
            break;
        case 1:
            func_ov116_020e4728(2, 8, a, 1, 2);
            func_ov116_020e47ec(2, 10, a, 1, 2);
            func_ov116_020e478c(2, 12, a, 1, 2);
            break;
        case 2:
            data_ov116_020e7180.v = 1;
            func_ov116_020e3b10();
            func_ov116_020e15c0(0, 1, 2, 0, 3);
            VBlankIntrWaitInGame();
            data_ov116_020e71a8.w0 = 0x260;
            func_ov116_020e48b4(2, 8, func_ov116_020e4374(a), 1, 2);
            break;
    }
    VBlankIntrWaitInGame();
    *(u32 *) 0x4000000 = (*(u32 *) 0x4000000 & ~0x1f00) | 0x1f00;
    func_ov116_020e4304();
    GXx_SetMasterBrightness_((void *) 0x400006c, -6);
    G2x_SetBlendBrightness_((void *) 0x4000050, 27, 0);
    func_0200acd8((void *) 0x4000050, 4, 8, 9, 14);
    data_ov116_020e7180.v = 0;
    func_ov116_020e3b10();
    func_ov116_020e15c0(0, 0, 1, 2, 3);
    *(u32 *) 0x4000000 = (*(u32 *) 0x4000000 & ~0x1f00) | 0x1f00;
    p                  = G2_GetBG2ScrPtr();
    MIi_CpuCopy16((s32) ((u8 *) G2S_GetBG2ScrPtr() + 0x800), p, 0x800);
    func_ov116_020e21d4(-6, 1);
}

#include "m2c.h"

typedef struct {
    u8 pad0[4];
    s32 w4;
    u8 pad8[0xA0C];
    u32 wa14;
    u8 pada18[0x28];
    s32 wa40;
} Gs;

typedef struct {
    u8 pad0[4];
    u32 w4;
} Hs;

extern Gs data_ov120_020f46dc;
extern Hs data_ov120_020f5120;
void func_ov120_020eb1a0(s32, s32);
void func_ov120_020f0ee0(void);
void G2x_SetBlendBrightness_(void *, s32, s32);
void GXx_SetMasterBrightness_(void *, s32);
void *G2S_GetBG2ScrPtr(void);
void *G2_GetBG2ScrPtr(void);
void MIi_CpuCopy16(s32, s32, s32);
void func_ov120_020e9c40(s32, s32, s32, s32, s32);
void func_ov120_020ec7fc(s32, s32, s32, s32, s32);
void func_ov120_020ec8c0(s32, s32, s32, s32, s32);
void func_ov120_020ec860(s32, s32, s32, s32, s32);
void func_ov120_020f00d8(void);
void VBlankIntrWaitInGame(void);
s32 func_ov120_020f12d8(s32);
void func_ov120_020eca50(s32, s32, s32, s32, s32);
void func_ov120_020eb35c(s32);
void func_0200acd8(void *, s32, s32, s32, s32);
void func_ov120_020eb0fc(s32, s32);

void func_ov120_020f136c(s32 a, s32 mode) {
    void *p;
    func_ov120_020eb1a0(-6, 2);
    func_ov120_020f0ee0();
    *(volatile u16 *) 0x4001050 = 0;
    G2x_SetBlendBrightness_((void *) 0x4001050, 0x1B, 0x1B - 0x21);
    GXx_SetMasterBrightness_((void *) 0x400106C, 0);
    *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1F00) | 0x1B00;
    MIi_CpuCopy16(data_ov120_020f46dc.wa40, (s32) G2S_GetBG2ScrPtr() + 0x800, 0x800);
    func_ov120_020e9c40(1, 1, 1, 0, 3);
    data_ov120_020f46dc.w4 = 0x2A0;
    switch (mode) {
        case 1:
            func_ov120_020ec7fc(2, 8, a, 1, 7);
            func_ov120_020ec8c0(2, 0xA, a, 1, 7);
            func_ov120_020ec860(2, 0xC, a, 1, 7);
            break;
        case 2:
            data_ov120_020f5120.w4 = (data_ov120_020f5120.w4 & ~0xFF) | 1;
            func_ov120_020f00d8();
            func_ov120_020e9c40(1, 1, 2, 0, 3);
            VBlankIntrWaitInGame();
            data_ov120_020f46dc.w4 = 0x2A0;
            func_ov120_020eca50(2, 8, func_ov120_020f12d8(a), 1, 7);
            break;
    }
    *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1F00) | 0x1F00;
    func_ov120_020eb35c(0);
    func_ov120_020f0ee0();
    GXx_SetMasterBrightness_((void *) 0x400106C, -6);
    G2x_SetBlendBrightness_((void *) 0x4001050, 0x1B, 0);
    func_0200acd8((void *) 0x4001050, 4, 8, 9, 0xE);
    data_ov120_020f5120.w4 = data_ov120_020f5120.w4 & ~0xFF;
    func_ov120_020f00d8();
    func_ov120_020e9c40(1, 0, 1, 2, 3);
    *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1F00) | 0x1F00;
    p                           = G2S_GetBG2ScrPtr();
    MIi_CpuCopy16((s32) G2_GetBG2ScrPtr(), (s32) p + 0x800, 0x800);
    func_ov120_020eb0fc(-6, 2);
    data_ov120_020f46dc.wa14 |= 0x40000;
}

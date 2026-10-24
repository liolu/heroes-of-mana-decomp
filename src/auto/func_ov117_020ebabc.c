#include "m2c.h"

typedef struct TabEnt {
    u32 lo : 3;
    u32 id : 9;
    u32 hi : 20;
    u32 other;
} TabEnt;

typedef struct Cfg {
    u8 pad[4];
    u8 *p;
} Cfg;

typedef struct Misc {
    u8 pad[0x20];
    s16 idx;
} Misc;

void func_ov117_020e395c(s32, s32);
void func_ov117_020eb988(void);
void G2x_SetBlendBrightness_(void *, s32, s32);
void GXx_SetMasterBrightness_(void *, s32);
void *G2S_GetBG2ScrPtr(void);
void *G2_GetBG2ScrPtr(void);
void MIi_CpuCopy16(void *, void *, s32);
void func_ov117_020e15e0(s32, s32, s32, s32, s32);
void func_ov117_020ec3f0(s32, s32, s32, s32, s32);
void func_ov117_020ec450(s32, s32, s32, s32, s32);
void func_ov117_020ebed8(s32, s32, s32, s32, s32);
void func_ov117_020ebf98(s32, s32, s32, s32, s32);
void func_ov117_020ebf38(s32, s32, s32, s32, s32);
void func_ov117_020e9d74(void);
void VBlankIntrWaitInGame(void);
s32 func_ov117_020eba20(s32);
void func_ov117_020e3a74(s32);
void func_0200acd8(void *, s32, s32, s32, s32);
void func_ov117_020e38b8(s32, s32);

extern Cfg *data_0203673c;
typedef struct S2 {
    u32 p0;
    s32 f4;
    u8 pad8[0xaa4];
    void *faac;
    u32 fab0;
} S2;

extern S2 data_ov117_020f23e0;
extern TabEnt data_ov117_020f2e94[];
extern Misc data_ov117_020f3d94;
typedef struct S3 {
    u32 p0;
    u32 v;
} S3;

extern S3 data_ov117_020f3db8;

void func_ov117_020ebabc(s32 arg0, u32 arg1) {
    u8 *p;

    func_ov117_020e395c(-6, 2);
    func_ov117_020eb988();
    *(s16 *) 0x4001050 = 0;
    G2x_SetBlendBrightness_((void *) 0x4001050, 0x1b, -6);
    GXx_SetMasterBrightness_((void *) 0x400106c, 0);
    *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0x1f00) | 0x1b00;
    MIi_CpuCopy16(data_ov117_020f23e0.faac, (u8 *) G2S_GetBG2ScrPtr() + 0x800, 0x800);
    func_ov117_020e15e0(1, 1, 1, 0, 3);
    data_ov117_020f23e0.f4 = 0x2a0;
    if (data_ov117_020f3d94.idx != -1) {
        p = data_0203673c->p + 8 + (data_ov117_020f2e94[data_ov117_020f3d94.idx].id << 5);
    }
    switch (arg1) {
        case 0:
            func_ov117_020ec3f0(2, 8, arg0, 1, 7);
            break;
        case 1:
            func_ov117_020ec450(2, 8, *(u16 *) (p + 8), 1, 7);
            break;
        case 2:
            func_ov117_020ec450(2, 8, *(u16 *) (p + 0xa), 1, 7);
            break;
        case 3:
            func_ov117_020ebed8(2, 8, arg0, 1, 7);
            func_ov117_020ebf98(2, 0xa, arg0, 1, 7);
            func_ov117_020ebf38(2, 0xc, arg0, 1, 7);
            break;
        case 4:
            data_ov117_020f3db8.v = (data_ov117_020f3db8.v & ~0xff) | 1;
            func_ov117_020e9d74();
            func_ov117_020e15e0(1, 1, 2, 0, 3);
            VBlankIntrWaitInGame();
            data_ov117_020f23e0.f4 = 0x2a0;
            func_ov117_020ec3f0(2, 8, func_ov117_020eba20(arg0), 1, 7);
            break;
    }
    *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0x1f00) | 0x1f00;
    func_ov117_020e3a74(0);
    func_ov117_020eb988();
    GXx_SetMasterBrightness_((void *) 0x400106c, -6);
    G2x_SetBlendBrightness_((void *) 0x4001050, 0x1b, 0);
    func_0200acd8((void *) 0x4001050, 4, 8, 9, 0xe);
    data_ov117_020f3db8.v = data_ov117_020f3db8.v & ~0xff;
    func_ov117_020e9d74();
    func_ov117_020e15e0(1, 0, 1, 2, 3);
    *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0x1f00) | 0x1f00;
    {
        u8 *q = G2S_GetBG2ScrPtr();
        MIi_CpuCopy16(G2_GetBG2ScrPtr(), q + 0x800, 0x800);
    }
    func_ov117_020e38b8(-6, 2);
    data_ov117_020f23e0.fab0 |= 0x4000000;
}

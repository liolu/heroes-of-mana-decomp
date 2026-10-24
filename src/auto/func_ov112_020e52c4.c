#include "m2c.h"

typedef struct TabEnt {
    u32 lo : 2;
    u32 id : 9;
    u32 hi : 21;
} TabEnt;

typedef struct Cfg {
    u8 pad[4];
    u8 *p4;
    u8 pad8[0x1c];
    u8 *p24;
} Cfg;

typedef struct S2 {
    u32 p0;
    s32 f4;
    u8 pad8[0x444];
    void *f44c;
    u8 pad450[0x33];
    u8 b483;
    u8 b484;
    u8 pad485[3];
    u32 f488;
} S2;

typedef struct S3 {
    u8 pad[0x80];
    u16 f80;
} S3;

s32 func_ov112_020e1c98(void);
void func_ov112_020e2830(s32, s32, s32);
void func_ov112_020e522c(void);
void G2x_SetBlendBrightness_(void *, s32, s32);
void GXx_SetMasterBrightness_(void *, s32);
void *G2S_GetBG2ScrPtr(void);
void *G2_GetBG2ScrPtr(void);
void MIi_CpuCopy16(void *, void *, s32);
void func_ov112_020e17c4(s32, s32, s32, s32, s32);
void func_ov112_020e4560(s32, s32, s32, s32, s32);
void func_ov112_020e4438(s32, s32, s32, s32, s32);
void func_ov112_020e44fc(s32, s32, s32, s32, s32);
void func_ov112_020e449c(s32, s32, s32, s32, s32);
void func_ov112_020e4624(s32, s32, s32, s32, s32);
void func_ov112_020e47ac(s32, s32, s32, s32, s32);
void func_ov112_020e4878(s32, s32, s32, s32, s32);
void func_ov112_020e4814(s32, s32, s32, s32, s32);
void func_ov112_020e43d4(s32, s32, s32, s32, s32);
void func_ov112_020e2a4c(s32);
void func_0200acd8(void *, s32, s32, s32, s32);
void func_ov112_020e278c(s32, s32, s32);

extern Cfg *data_0203673c;
extern S2 data_ov112_020ec588;
extern S3 data_ov112_020ec988;

void func_ov112_020e52c4(s32 arg0, u32 arg1) {
    s32 ip;
    u8 *lr;
    u8 *r7;
    u8 *r6;
    u8 *r4;

    if (func_ov112_020e1c98() == 0) {
        return;
    }
    ip = data_ov112_020ec988.f80 * 0x34;
    lr = data_0203673c->p24;
    r7 = lr + ip;
    r6 = data_0203673c->p4 + 8 + (((TabEnt *) (lr + ip))->id << 5);
    func_ov112_020e2830(-6, 2, 2);
    func_ov112_020e522c();
    *(s16 *) 0x4001050 = 0;
    G2x_SetBlendBrightness_((void *) 0x4001050, 0x1b, -6);
    GXx_SetMasterBrightness_((void *) 0x400106c, 0);
    *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0x1f00) | 0x1b00;
    MIi_CpuCopy16(data_ov112_020ec588.f44c, (u8 *) G2S_GetBG2ScrPtr() + 0x800, 0x800);
    func_ov112_020e17c4(1, 1, 1, 0, 3);
    data_ov112_020ec588.f4 = 0x300;
    switch (arg1) {
        case 0:
            func_ov112_020e4560(2, 8, arg0 + 1, 1, 7);
            break;
        case 1:
            r4 = r7 + 0xc;
            func_ov112_020e4438(2, 8, r4[arg0], 1, 7);
            func_ov112_020e44fc(2, 0xa, r4[arg0], 1, 7);
            func_ov112_020e449c(2, 0xc, r4[arg0], 1, 7);
            break;
        case 3:
            func_ov112_020e4624(2, 8, r6[0xe], 1, 7);
            break;
        case 4:
            func_ov112_020e4624(2, 8, r6[0xf], 1, 7);
            break;
        case 2:
            func_ov112_020e47ac(2, 8, *(u16 *) (r7 + 0x16), 1, 7);
            func_ov112_020e4878(2, 0xa, *(u16 *) (r7 + 0x16), 1, 7);
            func_ov112_020e4814(2, 0xc, *(u16 *) (r7 + 0x16), 1, 7);
            break;
        case 5:
            func_ov112_020e43d4(2, 8, (*(u32 *) r6 << 22) >> 23, 1, 7);
            break;
        default:
            break;
    }
    *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0x1f00) | 0x1f00;
    func_ov112_020e2a4c(0);
    func_ov112_020e522c();
    GXx_SetMasterBrightness_((void *) 0x400106c, -6);
    G2x_SetBlendBrightness_((void *) 0x4001050, 0x1b, 0);
    func_0200acd8((void *) 0x4001050, 4, 8, 9, 0xe);
    func_ov112_020e17c4(1, 0, 1, 2, 3);
    *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0x1f00) | 0x1f00;
    {
        u8 *q = G2S_GetBG2ScrPtr();
        MIi_CpuCopy16(G2_GetBG2ScrPtr(), q + 0x800, 0x800);
    }
    func_ov112_020e278c(-6, 2, 2);
    data_ov112_020ec588.b483 = 0xb;
    data_ov112_020ec588.b484 = 0xb;
    data_ov112_020ec588.f488 |= 4;
}

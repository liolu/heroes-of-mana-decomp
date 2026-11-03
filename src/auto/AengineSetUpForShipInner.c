/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s32 pad0[0x35c / 4];
    void *w35c;
    void *w360;
} Ship;

typedef struct {
    u8 pad0[8];
    u16 h8;
    u16 ha;
} ShipH;

typedef struct {
    u8 pad[0x100 + 0x54];
    u16 h154;
} Ctl;

void func_020083e0(void *);
void G3X_Init(void);
void G3X_InitMtxStack(void);
void GX_SetBankForBG(s32);
void GX_SetBankForOBJ(s32);
void GX_SetBankForSubBG(s32);
void GX_SetBankForSubOBJ(s32);
void GX_SetBankForBGExtPltt(s32);
void GX_SetBankForOBJExtPltt(s32);
void GX_SetGraphicsMode(u32, u32, u32);
void GXx_SetMasterBrightness_(volatile u16 *, s32);
void *ReadShipsFile(s32, s32, s32 *);
void *ReadShipsCompFile(s32, s32, s32 *);
void GX_BeginLoadBGExtPltt(void);
void DC_FlushAll(void);
void GX_LoadBGExtPltt(void *, u32, u32);
void GX_EndLoadBGExtPltt(void);
void *func_0200ed38(u32, s32, s32);
void MIi_CpuCopy16(void *, void *, s32);
void OS_FreeToHeap(u32, s32, void *);
void GX_LoadBGPltt(void *, s32, s32);
void func_0200bc84(void *, s32, s32);
void func_0200b9e4(void *, s32, s32);
void func_0200be04(void *, s32, s32);
void func_0200bb64(void *, s32, s32);
void func_0200bbc4(void *, s32, s32);
void G2x_SetBGyAffine_(volatile u16 *, void *, s32, s32, s32, s32);
void func_0200acd8(volatile u32 *, s32, s32, s32, s32);

extern u8 *data_ov109_020ea340;
extern Ctl *data_ov000_0205154c;

void AengineSetUpForShipInner(void) {
    s32 s20;
    s32 s1c;
    s32 s18;
    s32 s14;
    s32 s10;
    s32 sc;
    s32 s8;
    s32 mtx[4];
    void *buf;
    volatile u32 *disp = (volatile u32 *) 0x04000000;
    volatile u16 *bg;

    func_020083e0(mtx);
    G3X_Init();
    G3X_InitMtxStack();
    *disp = (*disp & 0xFFCFFFEF) | 0x10 | 0x200000;
    GX_SetBankForBG(0);
    GX_SetBankForOBJ(0);
    GX_SetBankForSubBG(0);
    GX_SetBankForSubOBJ(0);
    GX_SetBankForBG(1);
    GX_SetBankForOBJ(2);
    GX_SetBankForBGExtPltt(0x10);
    GX_SetBankForOBJExtPltt(0x20);
    GX_SetGraphicsMode(1, 5, 0);
    GXx_SetMasterBrightness_((volatile u16 *) 0x0400006C, -16);
    GXx_SetMasterBrightness_((volatile u16 *) 0x0400106C, -16);
    *(volatile s32 *) 0x04000010 = 0;
    *(volatile s32 *) 0x04000014 = 0;
    *(volatile u16 *) 0x04000050 = 0;
    buf                          = ReadShipsFile(0, 0, &s20);
    GX_BeginLoadBGExtPltt();
    DC_FlushAll();
    GX_LoadBGExtPltt(buf, 0x4000, s20);
    GX_LoadBGExtPltt(buf, 0x6000, s20);
    GX_EndLoadBGExtPltt();
    ((Ship *) data_ov109_020ea340)->w35c = func_0200ed38(0, -1, 0x20);
    MIi_CpuCopy16((u8 *) buf + 0x80, ((Ship *) data_ov109_020ea340)->w35c, 0x20);
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    ((Ship *) data_ov109_020ea340)->w360 = ReadShipsFile(0, 1, &s20);
    buf                                  = ReadShipsFile(0, 2, &s1c);
    ((ShipH *) data_ov109_020ea340)->ha  = s1c / 32;
    DC_FlushAll();
    GX_LoadBGPltt(buf, 0, s1c);
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    *disp                               = *disp & ~0x38000000;
    *disp                               = *disp & ~0x07000000;
    bg                                  = (volatile u16 *) 0x04000008;
    *bg                                 = (*bg & 0x43) | 4;
    *bg                                 = (*bg & ~3) | 3;
    buf                                 = ReadShipsCompFile(1, 1, &s18);
    ((ShipH *) data_ov109_020ea340)->h8 = s18 / 32;
    DC_FlushAll();
    func_0200bc84(buf, 0, s18);
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    buf = ReadShipsCompFile(2, 2, &s14);
    DC_FlushAll();
    func_0200b9e4(buf, 0, s14);
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    bg    = (volatile u16 *) 0x0400000A;
    *bg   = (*bg & 0x43) | 0x304 | 0x400;
    *bg   = *bg & ~3;
    bg[1] = (bg[1] & 0x43) | 0x110 | 0x4000;
    bg[1] = (bg[1] & ~3) | 3;
    G2x_SetBGyAffine_(bg + 11, mtx, 0, 0, 0, 0);
    buf = ReadShipsCompFile(1, 0, &s10);
    DC_FlushAll();
    func_0200be04(buf, 0, s10);
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    buf = ReadShipsCompFile(2, 1, &sc);
    DC_FlushAll();
    func_0200bb64(buf, 0, sc);
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    bg  = (volatile u16 *) 0x0400000E;
    *bg = (*bg & 0x43) | 0x210 | 0x6000;
    *bg = (*bg & ~3) | 3;
    G2x_SetBGyAffine_(bg + 17, mtx, 0, 0, 0, 0);
    buf = ReadShipsCompFile(2, 0, &s8);
    DC_FlushAll();
    func_0200bbc4(buf, 0, s8);
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    *disp = (*disp & ~0x1F00) | 0x1D00;
    func_0200acd8((volatile u32 *) 0x04000050, 1, 12, 12, 5);
    data_ov000_0205154c->h154 = 0x1D;
}

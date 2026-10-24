/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void G3X_Init(void);
void G3X_InitMtxStack(void);
void G3X_SetClearColor(u16, s32, s32, s32, s32);
void GX_SetBankForBG(s32);
void GX_SetBankForOBJ(s32);
void GX_SetBankForTex(s32);
void GX_SetBankForTexPltt(s32);
void GX_SetGraphicsMode(s32, s32, s32);
void Set3DAREAmapVIEW(void);

typedef struct {
    u8 pad[0x154];
    u16 v54;
} A1;
typedef struct {
    u8 pad[0x4A4];
    u16 v4a4;
} A2;
extern A2 *data_ov000_02051548;
extern A1 *data_ov000_0205154c;

void AengineScreenSetUp(void) {
    G3X_Init();
    G3X_InitMtxStack();
    GX_SetBankForTex(3);
    GX_SetBankForTexPltt(0x20);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x200010;
    GX_SetBankForBG(0);
    GX_SetBankForOBJ(0);
    GX_SetBankForOBJ(0x10);
    GX_SetBankForBG(0x40);
    GX_SetGraphicsMode(1, 0, 1);
    data_ov000_0205154c->v54 = 0x11;
    *(s32 *) 0x04000000      = (*(s32 *) 0x04000000 & ~0x1F00) | (data_ov000_0205154c->v54 << 8);
    *(u16 *) 0x04000008      = (*(u16 *) 0x04000008 & ~3) | 2;
    *(u16 *) 0x04000060      = (*(u16 *) 0x04000060 & 0xFFFFCFFD) | 2;
    *(u16 *) 0x04000060      = (*(u16 *) 0x04000060 & ~0x3000) | 0x10;
    *(u16 *) 0x04000050      = 0;
    *(s32 *) 0x04000540      = 3;
    G3X_SetClearColor(data_ov000_02051548->v4a4, 0x1F, 0x7FFF, 0x3F, 1);
    *(s32 *) 0x04000580 = 0xBFFF0000;
    Set3DAREAmapVIEW();
    *(s32 *) 0x0400044C = 0;
    *(u16 *) 0x04000060 = (*(u16 *) 0x04000060 & ~0x3000) | 8;
}

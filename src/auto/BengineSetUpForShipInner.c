/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct H {
    u32 pad : 13;
    u32 idx : 4;
    u32 pad1 : 15;
    u8 pad2[0x352];
    u8 f356_0 : 1;
    u8 pad3 : 7;
    u8 pad4;
    void *f358;
} H;
typedef struct P {
    u32 pad : 23;
    u32 bit : 1;
    u32 pad1 : 8;
    u8 pad2[0x2cc];
} P;
typedef struct T {
    u8 pad[0x28];
    P *f28;
} T;
extern H *data_ov109_020ea340;
extern T *data_0203673c;
extern void GX_SetBankForSubBG(s32);
extern void GX_SetBankForSubOBJ(s32);
extern void func_020096b0(s32);
extern void *ReadShipsFile(s32, s32, s32 *);
extern void *ReadShipsCompFile(s32, s32, s32 *);
extern void DC_FlushAll(void);
extern void GXS_LoadBGPltt(void *, s32, s32);
extern void func_0200bce4(void *, s32, s32);
extern void func_0200bc24(void *, s32, s32);
extern void OS_FreeToHeap(s32, s32, void *);
extern void MIi_CpuCopy16(void *, void *, s32);

void BengineSetUpForShipInner(void) {
    s32 spc;
    s32 sp8;
    s32 sp4;
    s32 sp0;
    void *r4;
    GX_SetBankForSubBG(0);
    GX_SetBankForSubOBJ(0);
    GX_SetBankForSubBG(4);
    GX_SetBankForSubOBJ(8);
    *(volatile s32 *) 0x04001000 = (*(volatile s32 *) 0x04001000 & 0xFFCFFFEF) | 0x200010;
    func_020096b0(0);
    *(volatile u16 *) 0x04001050 = 0;
    *(volatile s32 *) 0x04001010 = 0;
    *(volatile s32 *) 0x04001014 = 0;
    if (data_0203673c->f28[data_ov109_020ea340->idx].bit) {
        r4 = ReadShipsFile(0, 7, &spc);
    } else {
        r4 = ReadShipsFile(0, 3, &spc);
    }
    DC_FlushAll();
    GXS_LoadBGPltt(r4, 0, spc);
    if (r4 != 0) {
        OS_FreeToHeap(0, -1, r4);
    }
    *(volatile u16 *) 0x04001008 = (*(volatile u16 *) 0x04001008 & 0x43) | 4;
    *(volatile u16 *) 0x04001008 = *(volatile u16 *) 0x04001008 & ~3;
    if (data_0203673c->f28[data_ov109_020ea340->idx].bit) {
        r4 = ReadShipsCompFile(1, 3, &sp8);
    } else {
        r4 = ReadShipsCompFile(1, 2, &sp8);
    }
    DC_FlushAll();
    func_0200bce4(r4, 0, sp8);
    if (r4 != 0) {
        OS_FreeToHeap(0, -1, r4);
    }
    if (data_0203673c->f28[data_ov109_020ea340->idx].bit) {
        r4 = ReadShipsCompFile(2, 0xb, &sp4);
    } else {
        r4 = ReadShipsCompFile(2, 8, &sp4);
    }
    data_ov109_020ea340->f356_0 = 1;
    MIi_CpuCopy16(r4, data_ov109_020ea340->f358, 0x800);
    if (r4 != 0) {
        OS_FreeToHeap(0, -1, r4);
    }
    *(volatile u16 *) 0x0400100E = (*(volatile u16 *) 0x0400100E & 0x43) | 0x204;
    *(volatile u16 *) 0x0400100E = (*(volatile u16 *) 0x0400100E & ~3) | 3;
    if (data_0203673c->f28[data_ov109_020ea340->idx].bit) {
        r4 = ReadShipsCompFile(2, 0xa, &sp0);
    } else {
        r4 = ReadShipsCompFile(2, 7, &sp0);
    }
    DC_FlushAll();
    func_0200bc24(r4, 0, sp0);
    if (r4 != 0) {
        OS_FreeToHeap(0, -1, r4);
    }
    *(volatile s32 *) 0x04001000 = (*(volatile s32 *) 0x04001000 & ~0x1F00) | 0x1900;
    *(volatile u16 *) 0x04001050 = 0;
}

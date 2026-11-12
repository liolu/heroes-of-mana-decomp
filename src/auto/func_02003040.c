#include "m2c.h"

typedef struct {
    u32 id : 8;
    u32 m : 2;
    u32 a : 2;
    u32 b : 2;
    u32 rest : 18;
} Ent;
typedef struct {
    Ent e[2];
    u32 flag : 1;
    u32 cnt : 12;
    u32 rest : 19;
} Arg;
typedef struct {
    s32 kind;
    s32 idx;
    s32 id;
    s32 pad;
} Req;

extern void GX_SetBankForBG(s32);
extern void GX_SetGraphicsMode(s32, s32, s32);
extern void GX_SetBankForBGExtPltt(s32);
extern void GX_SetBankForSubBG(s32);
extern void func_020096b0(s32);
extern void GX_SetBankForSubBGExtPltt(s32);
extern void *func_02002fe4(s32, Req *, s32 *);
extern void *func_02002e48(s32, Req *, s32 *);
extern void MIi_CpuCopy16(void *, void *, s32);
extern void OS_FreeToHeap(s32, s32, void *);
extern void GXx_SetMasterBrightness_(s32, s32);
extern void GX_DispOn(void);
extern void func_020035ec(void);
extern void VBlankIntrWait(void);

void func_02003040(Arg *p) {
    s32 sp10;
    s32 spc;
    s32 sp8;
    s32 sp4;
    s32 sp0;
    Req r54;
    Req r44;
    Req r34;
    Req r24;
    Req r14;
    u16 *r4;
    u16 *r5;
    u16 *r6;
    u16 *q;
    void *buf;
    s32 i;
    s32 j;
    s32 id;
    s32 v;
    s32 m;

    *(volatile u16 *) 0x4000304 = *(volatile u16 *) 0x4000304 & ~0x8000;
    for (i = 0; i < 2; i++) {
        id = p->e[i].id;
        if (id == 0xFF) {
            continue;
        }
        switch (p->e[i].m) {
            case 0:
                switch (i) {
                    case 0:
                        GX_SetBankForBG(1);
                        GX_SetGraphicsMode(1, 3, 0);
                        *(volatile u16 *) 0x400000E = (*(volatile u16 *) 0x400000E & 0x43) | 0x810 | 0x4000;
                        GX_SetBankForBGExtPltt(0);
                        *(volatile s32 *) 0x4000000 = (*(volatile s32 *) 0x4000000 & ~0x1F00) | 0x800;
                        r4                          = (u16 *) 0x6010000;
                        r6                          = (u16 *) 0x6004000;
                        r5                          = (u16 *) 0x5000000;
                        break;
                    case 1:
                        GX_SetBankForSubBG(4);
                        func_020096b0(3);
                        *(volatile u16 *) 0x400100E = (*(volatile u16 *) 0x400100E & 0x43) | 0x810 | 0x4000;
                        GX_SetBankForSubBGExtPltt(0);
                        *(volatile s32 *) 0x4001000 = (*(volatile s32 *) 0x4001000 & ~0x1F00) | 0x800;
                        r4                          = (u16 *) 0x6210000;
                        r5                          = (u16 *) 0x5000400;
                        r6                          = (u16 *) 0x6204000;
                }
                q = r6;
                for (v = 0; v < 0x400; v++) {
                    *q++ = v;
                }
                r54.kind = 13;
                r54.idx  = 0;
                r54.id   = id;
                buf      = func_02002fe4(3, &r54, &sp10);
                MIi_CpuCopy16(buf, r5, 0x200);
                if (buf != 0) {
                    OS_FreeToHeap(0, -1, buf);
                }
                *r5      = 0;
                r44.kind = 13;
                r44.idx  = 1;
                r44.id   = id;
                buf      = func_02002fe4(3, &r44, &spc);
                MIi_CpuCopy16(buf, r4, 0x10000);
                if (buf != 0) {
                    OS_FreeToHeap(0, -1, buf);
                }
                break;
            case 1:
                switch (i) {
                    case 0:
                        GX_SetBankForBG(1);
                        GX_SetGraphicsMode(1, 0, 0);
                        *(volatile u16 *) 0x4000008 = (*(volatile u16 *) 0x4000008 & 0x43) | 0x810;
                        GX_SetBankForBGExtPltt(0);
                        *(volatile s32 *) 0x4000000 = (*(volatile s32 *) 0x4000000 & ~0x1F00) | 0x100;
                        r4                          = (u16 *) 0x6010000;
                        r6                          = (u16 *) 0x6004000;
                        r5                          = (u16 *) 0x5000000;
                        break;
                    case 1:
                        GX_SetBankForSubBG(4);
                        func_020096b0(0);
                        *(volatile u16 *) 0x4001008 = (*(volatile u16 *) 0x4001008 & 0x43) | 0x810;
                        GX_SetBankForSubBGExtPltt(0);
                        *(volatile s32 *) 0x4001000 = (*(volatile s32 *) 0x4001000 & ~0x1F00) | 0x100;
                        r4                          = (u16 *) 0x6210000;
                        r5                          = (u16 *) 0x5000400;
                        r6                          = (u16 *) 0x6204000;
                }
                r34.kind = 13;
                r34.idx  = 2;
                r34.id   = id;
                buf      = func_02002e48(3, &r34, &sp8);
                MIi_CpuCopy16(buf, r5, 0x200);
                if (buf != 0) {
                    OS_FreeToHeap(0, -1, buf);
                }
                *r5      = 0;
                r24.kind = 13;
                r24.idx  = 4;
                r24.id   = id;
                buf      = func_02002fe4(3, &r24, &sp4);
                MIi_CpuCopy16(buf, r6, 0x800);
                if (buf != 0) {
                    OS_FreeToHeap(0, -1, buf);
                }
                r14.kind = 13;
                r14.idx  = 3;
                r14.id   = id;
                buf      = func_02002fe4(3, &r14, &sp0);
                MIi_CpuCopy16(buf, r4, 0x8000);
                if (buf != 0) {
                    OS_FreeToHeap(0, -1, buf);
                }
        }
    }
    if (p->flag) {
        GXx_SetMasterBrightness_(0x400006C, 0x10);
        GXx_SetMasterBrightness_(0x400106C, 0x10);
        GX_DispOn();
        *(volatile s32 *) 0x4001000 = *(volatile s32 *) 0x4001000 | 0x10000;
    }
    for (j = 0x10; j >= 0; j--) {
        for (i = 0; i < 2; i++) {
            switch (p->e[i].a) {
                case 0:
                    break;
                case 1:
                    if (i == 0) {
                        GXx_SetMasterBrightness_(0x400006C, -j);
                    } else {
                        GXx_SetMasterBrightness_(0x400106C, -j);
                    }
                    break;
                case 2:
                    if (i == 0) {
                        GXx_SetMasterBrightness_(0x400006C, j);
                    } else {
                        GXx_SetMasterBrightness_(0x400106C, j);
                    }
                    break;
            }
        }
        if (((s32) (*(volatile u16 *) 0x27FFFA8 & 0x8000) >> 15) == 1) {
            func_020035ec();
        }
        VBlankIntrWait();
    }
    for (i = 0; (u32) i <= p->cnt; i++) {
        if (((s32) (*(volatile u16 *) 0x27FFFA8 & 0x8000) >> 15) == 1) {
            func_020035ec();
        }
        VBlankIntrWait();
    }
    for (v = 0; v <= 0x10; v++) {
        for (i = 0; i < 2; i++) {
            switch (p->e[i].b) {
                case 0:
                    break;
                case 1:
                    if (i == 0) {
                        GXx_SetMasterBrightness_(0x400006C, -v);
                    } else {
                        GXx_SetMasterBrightness_(0x400106C, -v);
                    }
                    break;
                case 2:
                    if (i == 0) {
                        GXx_SetMasterBrightness_(0x400006C, v);
                    } else {
                        GXx_SetMasterBrightness_(0x400106C, v);
                    }
                    break;
            }
        }
        if (((s32) (*(volatile u16 *) 0x27FFFA8 & 0x8000) >> 15) == 1) {
            func_020035ec();
        }
        VBlankIntrWait();
    }
}

#include "m2c.h"

typedef struct {
    u32 f0 : 8;
    u32 mode : 8;
    u32 idx : 8;
    u32 top : 8;
} W858;

typedef struct {
    u32 f0 : 8;
    u32 f8 : 8;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 b18 : 1;
    u32 b19 : 1;
    u32 rest : 12;
} W85C;

typedef struct {
    u32 w0;
    u32 w4;
    u32 w8;
    u32 wc;
    u8 pad10[0x850 - 0x10];
    s32 w850;
    s32 w854;
    W858 w858;
    W85C w85c;
    s32 w860;
    s32 w864;
    u8 pad868[4];
    s32 w86c;
    s32 w870;
} G;

typedef struct {
    u8 pad0[4];
    u8 b4;
    u8 pad5[5];
    u16 ha;
    u32 pre : 10;
    u32 f10 : 8;
    u32 rest : 14;
    u16 h10;
    u16 h12;
    u16 h14;
    u16 h16;
} D8;

typedef struct {
    u32 w0;
    u32 w4;
    u32 w8;
    u32 wc;
} E16;

extern G data_ov115_020e9160;
extern u8 data_ov115_020e9970[];
extern u8 data_ov115_020e95f0[];
extern s32 data_ov115_020e99e4[];
extern D8 data_ov115_020e8d24;
extern u8 data_ov115_020e8d28[];
extern E16 data_ov115_020e9a04[];
typedef struct {
    u8 pad[0x22];
    u16 h22;
} H913;
extern H913 data_ov115_020e913c;

extern void MIi_CpuClear32(s32, void *, s32);
extern void MIi_CpuCopy32(void *, void *, s32);
extern void *func_0200a7ec(void);
extern void *func_0200a7b8(void);
extern void *func_0200a80c(void);
extern void *func_0200aa84(void);
extern void VBlankIntrWaitInGame(void);
extern void func_ov115_020e53f0(s32);
extern void func_ov115_020e5124(s32);
extern void func_ov115_020e4b98(s32);
extern void func_ov115_020e4d54(s32);
extern void func_ov115_020e21b4(s32);
extern void func_ov115_020e3db0(s32, s32, s32);
extern s32 func_ov115_020e67c0(s32, s32, s32, s32, s32, void *);
extern void func_ov115_020e5870(void);
extern void func_ov115_020e57e4(void);
extern void func_ov115_020e216c(void *);
extern s32 func_ov115_020e6890(s32, s32, s32, s32, s32, s32);
extern void func_ov115_020e1f6c(s32);
extern void func_ov115_020e68fc(s32, s32, s32, s32, s32);
extern void func_ov115_020e475c(void);

void func_ov115_020e591c(s32 arg0) {
    s32 r4 = arg0;

    data_ov115_020e9160.w85c.b19 = 0;
    data_ov115_020e9160.w858.top = 0x34;
    data_ov115_020e9160.w85c.f0  = 0x34;
    data_ov115_020e9160.w85c.f8  = 0x34;
    data_ov115_020e9160.w85c.b18 = 1;
    switch (data_ov115_020e9160.w858.mode) {
        case 1:
            data_ov115_020e9160.w858.idx = 0x34;
            MIi_CpuClear32(0, func_0200a7ec(), 0x1000);
            MIi_CpuClear32(0, (u8 *) func_0200a7b8() + 0x800, 0x800);
            func_ov115_020e53f0(0x20);
            data_ov115_020e9160.w8   = 0x7e0;
            data_ov115_020e9160.w854 = func_ov115_020e67c0(0x30, 0x10, 3, 0, 0, data_ov115_020e9970);
            data_ov115_020e9160.w850 = func_ov115_020e67c0(0x64, 0, 7, 0, 0, data_ov115_020e95f0);
            VBlankIntrWaitInGame();
            func_ov115_020e5870();
            data_ov115_020e9160.w8   = 0x7c0;
            data_ov115_020e9160.w854 = func_ov115_020e67c0(0x30, 0x10, 3, 0, 0, data_ov115_020e9970);
            data_ov115_020e9160.w850 = func_ov115_020e67c0(0x64, 0, 7, 0, 0, data_ov115_020e95f0);
            MIi_CpuCopy32((void *) data_ov115_020e9160.w86c, func_0200a80c(), 0x800);
            r4 = (s32) func_0200a7b8();
            MIi_CpuCopy32((u8 *) func_0200a7b8() + 0x800, (void *) r4, 0x800);
            *(volatile u32 *) 0x4000010 = 2;
            break;
        case 2: {
            s32 idx;
            s32 r5;
            MIi_CpuClear32(0, (void *) 0x6810000, 0x1000);
            MIi_CpuClear32(0, (void *) 0x6808000, 0x20);
            r4  = 0;
            idx = data_ov115_020e9160.w858.idx;
            if (idx == 0x34 || data_ov115_020e99e4[idx] == r4 - 1) {
                data_ov115_020e8d24.b4 = 0;
            } else {
                func_ov115_020e216c(data_ov115_020e8d28);
                data_ov115_020e8d24.h14 = 0x38;
                data_ov115_020e8d24.ha  = 0x58;
                data_ov115_020e8d24.h16 = 8;
                data_ov115_020e8d24.h10 = 1;
                data_ov115_020e8d24.h12 = 0x10;
                data_ov115_020e8d24.f10 = 1;
                data_ov115_020e8d24.b4  = func_ov115_020e6890(
                    2, 5, *((u32 *) ((u8 *) data_ov115_020e9a04 + data_ov115_020e9160.w858.idx * 16 + 4)) >> 24, 2, 9, 0);
                func_ov115_020e1f6c(*((u32 *) ((u8 *) data_ov115_020e9a04 + data_ov115_020e9160.w858.idx * 16 + 4)) >> 24);
                data_ov115_020e9160.wc = 0x240;
                r4                     = *((u32 *) ((u8 *) data_ov115_020e9a04 + data_ov115_020e9160.w858.idx * 16 + 4)) >> 24;
                if ((r4 & 1) == 0) {
                    if (r4 != 0) {
                        r4 = r4 - 1;
                    }
                }
                func_ov115_020e68fc(0x10, 0x10, r4, 0, 1);
            }
            VBlankIntrWaitInGame();
            MIi_CpuCopy32((void *) 0x6810000, func_0200a7ec(), 0x1000);
            r5 = data_ov115_020e9160.w4 << 5;
            {
                void *d = func_0200aa84();
                MIi_CpuCopy32((void *) 0x6808000, d, r5);
            }
            func_ov115_020e475c();
            idx = data_ov115_020e9160.w858.idx;
            if (idx != 0x34 && data_ov115_020e99e4[idx] != -1) {
                data_ov115_020e9160.wc = 0x200;
                func_ov115_020e68fc(0x10, 0x10, r4, 0, 1);
            }
            break;
        }
        case 4:
            MIi_CpuClear32(0, (u8 *) func_0200a7b8() + 0x800, 0x800);
            func_ov115_020e5124(0x20);
            data_ov115_020e9160.w8   = 0x7e0;
            data_ov115_020e9160.w854 = func_ov115_020e67c0(0x30, 0x10, 0xe, 0, 0, data_ov115_020e9970);
            VBlankIntrWaitInGame();
            func_ov115_020e5870();
            data_ov115_020e9160.w8      = 0x7c0;
            data_ov115_020e9160.w854    = func_ov115_020e67c0(0x30, 0x10, 0xe, 0, 0, data_ov115_020e9970);
            *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1f00) | 0x1c00;
            MIi_CpuCopy32((void *) data_ov115_020e9160.w864, func_0200a80c(), 0x800);
            r4 = (s32) func_0200a7b8();
            MIi_CpuCopy32((u8 *) func_0200a7b8() + 0x800, (void *) r4, 0x800);
            *(volatile u32 *) 0x4000010 = 0x1ff;
            break;
        case 0x18:
            MIi_CpuClear32(0, (u8 *) func_0200a7b8() + 0x800, 0x800);
            func_ov115_020e4b98(0x20);
            data_ov115_020e9160.w8   = 0x7e0;
            data_ov115_020e9160.w854 = func_ov115_020e67c0(0x30, 0x10, 0xf, 0, 0, data_ov115_020e9970);
            VBlankIntrWaitInGame();
            func_ov115_020e5870();
            data_ov115_020e9160.w8      = 0x7c0;
            data_ov115_020e9160.w854    = func_ov115_020e67c0(0x30, 0x10, 0xf, 0, 0, data_ov115_020e9970);
            *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1f00) | 0x1c00;
            MIi_CpuCopy32((void *) data_ov115_020e9160.w860, func_0200a80c(), 0x800);
            r4 = (s32) func_0200a7b8();
            MIi_CpuCopy32((u8 *) func_0200a7b8() + 0x800, (void *) r4, 0x800);
            *(volatile u32 *) 0x4000010 = 0x1fd0002;
            break;
        case 0x40:
            MIi_CpuClear32(0, (u8 *) func_0200a7b8() + 0x800, 0x800);
            func_ov115_020e21b4(r4);
            func_ov115_020e3db0(0, 0, 0);
            func_ov115_020e4d54(0x20);
            data_ov115_020e9160.w8   = 0x7e0;
            data_ov115_020e9160.w854 = func_ov115_020e67c0(0x30, 0x10, 0x27, 0, 0, data_ov115_020e9970);
            VBlankIntrWaitInGame();
            func_ov115_020e5870();
            data_ov115_020e9160.w8      = 0x7c0;
            data_ov115_020e9160.w854    = func_ov115_020e67c0(0x30, 0x10, 0x27, 0, 0, data_ov115_020e9970);
            *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1f00) | 0x1c00;
            MIi_CpuCopy32((void *) data_ov115_020e9160.w870, func_0200a80c(), 0x800);
            r4 = (s32) func_0200a7b8();
            MIi_CpuCopy32((u8 *) func_0200a7b8() + 0x800, (void *) r4, 0x800);
            *(volatile u32 *) 0x4000010  = 2;
            data_ov115_020e9160.w85c.b17 = 1;
            data_ov115_020e913c.h22 |= 2;
            break;
        default:
            break;
    }
    func_ov115_020e5870();
    func_ov115_020e57e4();
}

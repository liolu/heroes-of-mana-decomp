#include "m2c.h"

typedef struct {
    u8 p0[4];
    s32 f4;
    s32 f8;
    s32 fC;
    u8 p1[0x510 - 0x10];
    s32 f510;
    u32 f514;
    u32 f518;
    u8 f51C;
    u8 p2[0x528 - 0x51D];
    void *f528;
} G;
extern G data_ov114_020e6148;
extern u8 data_ov114_020e6118[];
extern s32 data_ov114_020e610c[];
extern u8 data_ov114_020e65d8[];

void *func_0200a80c(void);
void *func_0200a840(void);
void *func_0200a7b8(void);
void *func_0200a7ec(void);
void *func_0200aa84(void);
void MIi_CpuCopy16(void *, void *, s32);
void MIi_CpuCopy32(void *, void *, s32);
void MIi_CpuClear16(s32, void *, s32);
void MIi_CpuClear32(s32, void *, s32);
void VBlankIntrWaitInGame(void);
s32 func_ov114_020e323c(s32, s32, s32, s32, s32, s32);
void func_ov114_020e19c8(s32);
void func_ov114_020e32a8(s32, s32, s32, s32, s32);
s32 func_ov114_020e3174(s32, s32, s32, s32, s32, void *);
void func_ov114_020e3110(s32, s32, s32, s32, s32, s32);
void func_ov114_020e4aa8(void);
void func_ov114_020e4af4(void);
void VBlankIntrWaitInGame(void);

void func_ov114_020e4b40(void) {
    u32 st;
    u32 idx;
    s32 r4;
    s32 r5;
    s32 k;

    st = ((data_ov114_020e6148.f514) << 0xB) >> 0x18;
    switch (st) {
        case 1:
            MIi_CpuCopy16(data_ov114_020e6148.f528, func_0200a80c(), 0x800);
            data_ov114_020e6148.f4 = 1;
            MIi_CpuClear32(0, (void *) 0x06810000, 0x1000);
            MIi_CpuClear32(0, (void *) 0x06808000, 0x20);
            r4  = 0;
            idx = (data_ov114_020e6148.f518) >> 0x18;
            if (idx == 0xF || data_ov114_020e610c[idx] == -1) {
                MIi_CpuClear16(0, func_0200a840(), 0x800);
                data_ov114_020e6148.f51C = 0;
            } else {
                data_ov114_020e6148.f51C =
                    func_ov114_020e323c(2, 5, (*(u32 *) (data_ov114_020e6118 + idx * 0x10 + 4)) >> 0x18, 2, 9, 0);
                func_ov114_020e19c8((*(u32 *) (data_ov114_020e6118 + ((data_ov114_020e6148.f518) >> 0x18) * 0x10 + 4)) >>
                                    0x18);
                data_ov114_020e6148.fC = 0x240;
                r4 = (*(u32 *) (data_ov114_020e6118 + ((data_ov114_020e6148.f518) >> 0x18) * 0x10 + 4)) >> 0x18;
                if (!(r4 & 1)) {
                    if (r4 != 0) {
                        r4 -= 1;
                    }
                }
                func_ov114_020e32a8(0x10, 0x10, r4, 0, 1);
            }
            data_ov114_020e6148.f8   = 0x280;
            data_ov114_020e6148.f510 = func_ov114_020e3174(0x84, 0, 7, 0, 0, data_ov114_020e65d8);
            VBlankIntrWaitInGame();
            MIi_CpuCopy32((void *) 0x06810000, func_0200a7ec(), 0x1000);
            r5 = data_ov114_020e6148.f4 << 5;
            MIi_CpuCopy32((void *) 0x06808000, func_0200aa84(), r5);
            r5 = data_ov114_020e6148.f4;
            func_ov114_020e4aa8();
            func_ov114_020e4af4();
            data_ov114_020e6148.f4 = r5;
            idx                    = (data_ov114_020e6148.f518) >> 0x18;
            if (idx != 0xF && data_ov114_020e610c[idx] != -1) {
                data_ov114_020e6148.fC = 0x200;
                func_ov114_020e32a8(0x10, 0x10, r4, 0, 1);
            }
            data_ov114_020e6148.f514 = data_ov114_020e6148.f514 | 0x200;
            return;
        case 2:
            data_ov114_020e6148.f518 = (data_ov114_020e6148.f518 & ~0xFF000000) | 0x0F000000;
            MIi_CpuClear32(0, func_0200a7b8(), 0x800);
            MIi_CpuClear32(0, func_0200a80c(), 0x800);
            MIi_CpuClear32(0, func_0200a7ec(), 0x800);
            MIi_CpuClear32(0, func_0200a840(), 0x800);
            MIi_CpuCopy16(data_ov114_020e6148.f528, func_0200a80c(), 0x140);
            func_ov114_020e3110(4, 2, 0x6E, 0, 0, 0x1C);
            return;
        default:
            return;
    }
}

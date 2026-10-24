/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad0[12];
    s8 fc;
    u8 fd;
    s8 fe;
    u8 padf[5];
    s8 f14;
    u8 f15;
    s8 f16;
    s8 f17;
    s8 f18;
    u8 pad19[7];
    s32 f20;
    u8 pad24[196];
    s32 fe8;
    u8 padec[144];
    s8 f17c;
    u8 pad17d[1];
    s16 f17e;
    s32 f180;
    s32 f184;
    s32 f188;
    s32 f18c;
    s32 f190;
    u8 pad194[16];
    s8 f1a4;
    s8 f1a5;
    s8 f1a6;
    s8 f1a7;
    s8 f1a8;
    s8 f1a9;
    s8 f1aa;
    s8 f1ab;
    s8 f1ac;
    s8 f1ad;
    s8 f1ae;
    u8 pad1af[1];
    s16 f1b0;
    s16 f1b2;
    s16 f1b4;
    u8 pad1b6[2];
    s32 f1b8;
    s32 f1bc;
    s32 f1c0;
    s32 f1c4;
    s32 f1c8;
    s32 f1cc;
    s32 f1d0;
    s32 f1d4;
    u8 pad1d8[8];
    s32 f1e0;
    s32 f1e4;
    u8 pad1e8[8];
    s32 f1f0;
    s32 f1f4;
    s32 f1f8;
    s32 f1fc;
    u8 pad200[4];
    s32 f204;
    s32 f208;
    s32 f20c;
    u8 pad210[224];
    s32 f2f0;
    u8 pad2f4[376];
    s32 f46c;
    s32 f470;
} S;

S *func_ov123_0209d368(void);
void MIi_CpuClear32(s32, void *, s32);
void MIi_CpuClear16(s32, void *, s32);
void MI_CpuFill8(void *, s32, s32);
s16 func_ov123_02099d90(s32);
void func_ov123_0209d354(s32);

void func_ov123_020a23a8(s32 arg0) {
    S *temp_r0;
    S *temp_r0_2;
    S *temp_r0_3;
    S *temp_r0_4;
    S *temp_r0_5;
    S *temp_r0_6;
    S *temp_r0_7;
    S *temp_r4;
    S *temp_r5;
    func_ov123_0209d368()->fc   = 0;
    func_ov123_0209d368()->f17c = 0;
    temp_r5                     = func_ov123_0209d368();
    temp_r5->f17e               = func_ov123_02099d90(0x10000);
    func_ov123_0209d368()->f180 = 0;
    temp_r0                     = func_ov123_0209d368();
    temp_r0->f184               = 0;
    temp_r0->f188               = 0;
    temp_r0_2                   = func_ov123_0209d368();
    temp_r0_2->f18c             = 0;
    temp_r0_2->f190             = 0;
    func_ov123_0209d368()->f1a4 = 0;
    func_ov123_0209d368()->f1a9 = 0;
    func_ov123_0209d368()->f1aa = 0;
    func_ov123_0209d368()->f1ab = 0;
    func_ov123_0209d368()->f1ac = 0;
    func_ov123_0209d368()->f1a7 = 0;
    func_ov123_0209d368()->f1a8 = 0;
    func_ov123_0209d368()->f1b2 = 0;
    func_ov123_0209d368()->f1b4 = 0;
    func_ov123_0209d368()->f1b8 = 0;
    temp_r0_3                   = func_ov123_0209d368();
    temp_r0_3->f1e0             = 0;
    temp_r0_3->f1e4             = 0;
    temp_r0_4                   = func_ov123_0209d368();
    temp_r0_4->f1f0             = 0;
    temp_r0_4->f1f4             = 0;
    MIi_CpuClear32(0, (u8 *) func_ov123_0209d368() + 0x3CC, 0x98);
    if (arg0 == 2) {
        temp_r4      = func_ov123_0209d368();
        temp_r4->f14 = func_ov123_0209d368()->fd;
        if (func_ov123_0209d368()->f15 == 3) {
            func_ov123_0209d354(1);
            return;
        }
        if (func_ov123_0209d368()->f15 != 2) {
            return;
        }
        func_ov123_0209d354(0xA);
        return;
    }
    func_ov123_0209d368()->fd   = 0;
    func_ov123_0209d368()->fe   = 0;
    func_ov123_0209d368()->f14  = 0;
    func_ov123_0209d368()->f17  = 0;
    func_ov123_0209d368()->f20  = 0;
    func_ov123_0209d368()->fe8  = 0;
    func_ov123_0209d368()->f1a5 = 0;
    func_ov123_0209d368()->f1b0 = 0;
    func_ov123_0209d368()->f1bc = 0;
    temp_r0_5                   = func_ov123_0209d368();
    temp_r0_5->f1c0             = 0;
    temp_r0_5->f1c4             = 0;
    func_ov123_0209d368()->f1c8 = 0;
    temp_r0_6                   = func_ov123_0209d368();
    temp_r0_6->f1cc             = 0;
    temp_r0_6->f1d0             = 0;
    func_ov123_0209d368()->f1d4 = 0;
    func_ov123_0209d368()->f204 = 0;
    func_ov123_0209d368()->f208 = 0;
    func_ov123_0209d368()->f2f0 = 0;
    MIi_CpuClear32(0, (u8 *) func_ov123_0209d368() + 0x24, 0x80);
    MIi_CpuClear16(0, (u8 *) func_ov123_0209d368() + 0xA4, 0x40);
    MIi_CpuClear32(0, (u8 *) func_ov123_0209d368() + 0xF4, 0x80);
    MIi_CpuClear32(0, (u8 *) func_ov123_0209d368() + 0x194, 0xC);
    MIi_CpuClear32(0, (u8 *) func_ov123_0209d368() + 0x210, 0x80);
    MIi_CpuClear16(0, (u8 *) func_ov123_0209d368() + 0x290, 0x40);
    MI_CpuFill8((u8 *) func_ov123_0209d368() + 0x2D0, 0, 0x20);
    MIi_CpuClear32(0, (u8 *) func_ov123_0209d368() + 0x348, 0x84);
    if (arg0 == 1) {
        if (func_ov123_0209d368()->f15 == 0) {
            func_ov123_0209d354(3);
            return;
        }
        if (func_ov123_0209d368()->f15 != 1) {
            return;
        }
        func_ov123_0209d354(4);
        return;
    }
    func_ov123_0209d368()->f15  = 0;
    func_ov123_0209d368()->f16  = 0;
    func_ov123_0209d368()->f18  = 0;
    func_ov123_0209d368()->f20c = 0;
    func_ov123_0209d368()->f1a6 = 0;
    func_ov123_0209d368()->f1ae = 0;
    func_ov123_0209d368()->f1ad = 0;
    temp_r0_7                   = func_ov123_0209d368();
    temp_r0_7->f1f8             = 0;
    temp_r0_7->f1fc             = 0;
    func_ov123_0209d368()->f46c = 0;
    func_ov123_0209d368()->f470 = 0;
}

#include "m2c.h"

typedef struct {
    u32 pad0 : 8;
    u32 bg : 5;
    u32 p13 : 3;
    u32 pad16 : 16;
} DispCnt;
typedef struct {
    u32 pad : 4;
    u32 f4 : 4;
    u32 f8 : 8;
    u32 rest : 16;
} Dummy;
typedef struct {
    u8 pad0[0xa40];
    s32 w0;
    s32 mode;
} Dummy2;
typedef struct {
    s32 w0;
    u8 pad4[4];
    s32 w8;
    u8 padc[0xa40 - 0xc];
    s32 a40;
    s32 a44;
    u32 pad_a48 : 31;
    u32 top : 1;
    u8 padA4c[0xa70 - 0xa4c];
    void *a70;
    u8 padA74[4];
    void *a78;
} G;
typedef struct {
    u8 pad0[0xb4];
    u32 lo : 14;
    u32 v : 4;
    u32 mid : 4;
    u32 w : 4;
    u32 hi : 6;
} P5;
typedef struct {
    u8 pad[8];
    s32 w8;
} A;

extern G data_ov121_020f6d60;
extern u32 data_ov121_020f6608;
extern s32 data_ov121_020f77f8;
extern u8 data_ov121_020f6d10[];
extern u8 data_ov121_020f5dbc[];
extern P5 data_ov121_020f5d60;

void func_ov121_020ec6cc(s32, s32, s32);
void func_ov121_020f2b54(void);
void G2x_SetBlendBrightness_(void *, s32, s32);
void GXx_SetMasterBrightness_(void *, s32);
void *G2_GetBG2ScrPtr(void);
void MIi_CpuCopy16(void *, void *, s32);
void func_ov121_020f2bec(s32, s32, s32, s32, s32, s32, s32);
void func_ov121_020e9ac8(s32, s32, s32, s32, s32);
void func_ov121_020eb5a4(s32, s32, s32, s32, s32, s32);
void func_ov121_020ec2c4(s32, s32, void *, s32, s32, void *, s32);
s32 func_ov121_020f4148(s32);

void func_ov121_020f3524(s32 mode, s32 arg) {
    s32 z;
    G *g = &data_ov121_020f6d60;

    data_ov121_020f6d60.top = 1;
    func_ov121_020ec6cc(-6, 1, 2);
    func_ov121_020f2b54();
    *(volatile u16 *) 0x4000050 = 0;
    G2x_SetBlendBrightness_((void *) 0x4000050, 0x1b, -6);
    GXx_SetMasterBrightness_((void *) 0x400006c, 0);
    ((DispCnt *) 0x4000000)->bg  = 0x1b;
    data_ov121_020f6d60.w0       = 0x280;
    *(volatile u16 *) 0x4000048  = (*(volatile u16 *) 0x4000048 & ~0x3f) | 0x1f;
    *(volatile u16 *) 0x400004a  = (*(volatile u16 *) 0x400004a & ~0x3f) | 0x3f;
    *(volatile u16 *) 0x4000040  = 0x10f0;
    *(volatile u16 *) 0x4000044  = 0x2880;
    ((DispCnt *) 0x4000000)->p13 = 1;
    data_ov121_020f6d60.a44      = mode;
    switch (mode) {
        case 1:
            MIi_CpuCopy16(data_ov121_020f6d60.a70, G2_GetBG2ScrPtr(), 0x800);
            func_ov121_020f2bec(0x14, 0x18, 0xa, 3, 0xb, 0x13, 0);
            func_ov121_020e9ac8(0, 1, 2, 0, 3);
            func_ov121_020eb5a4(8, 0xa, 0x42, 1, 2, 0);
            data_ov121_020f6608 |= 0x10;
            data_ov121_020f6d60.a40     = 2;
            ((DispCnt *) 0x4000000)->bg = 0x1f;
            data_ov121_020f77f8         = 1;
            return;
        case 2:
            data_ov121_020f6d60.w8 = 0x7d0;
            func_ov121_020ec2c4(0, 0, data_ov121_020f5dbc, 0, 0, data_ov121_020f6d10, 8);
            MIi_CpuCopy16(data_ov121_020f6d60.a70, G2_GetBG2ScrPtr(), 0x800);
            func_ov121_020f2bec(0, 0x18, 0xa, 3, 5, 0x13, 0);
            func_ov121_020f2bec(0xa, 0x18, 0xa, 3, 0x11, 0x13, 0);
            func_ov121_020e9ac8(0, 1, 2, 0, 3);
            func_ov121_020eb5a4(5, 6, 0x31, 1, 2, 0);
            func_ov121_020eb5a4(5, 0xe, 0x32, 1, 2, 0);
            {
                s32 t                 = func_ov121_020f4148(data_ov121_020f5d60.v);
                data_ov121_020f5d60.w = t;
            }
            data_ov121_020f6d60.a40 = 4;
            data_ov121_020f6608 |= 0x20;
            ((DispCnt *) 0x4000000)->bg = 0x1f;
            data_ov121_020f77f8         = 2;
            return;
        case 3:
            MIi_CpuCopy16(data_ov121_020f6d60.a70, G2_GetBG2ScrPtr(), 0x800);
            func_ov121_020f2bec(0x14, 0x18, 0xa, 3, 0xb, 0x13, 0);
            func_ov121_020e9ac8(0, 1, 2, 0, 3);
            func_ov121_020eb5a4(7, 0xa, 0x44, 1, 2, 0);
            data_ov121_020f6608 |= 0x40;
            data_ov121_020f6d60.a40     = 8;
            ((DispCnt *) 0x4000000)->bg = 0x1f;
            data_ov121_020f77f8         = 3;
            return;
        case 0:
            if ((u32) (arg - 0x68) <= 3) {
                MIi_CpuCopy16(data_ov121_020f6d60.a78, G2_GetBG2ScrPtr(), 0x800);
            } else {
                MIi_CpuCopy16(data_ov121_020f6d60.a70, G2_GetBG2ScrPtr(), 0x800);
            }
            func_ov121_020f2bec(0, 0x18, 0xa, 3, 0xb, 0x13, 0);
            func_ov121_020e9ac8(0, 1, 2, 0, 3);
            switch (arg) {
                case 0x6b:
                    z = 0;
                    func_ov121_020eb5a4(7, 9, 0x6b, 1, 2, z);
                    func_ov121_020eb5a4(7, 0xb, 0x39, 1, 2, z);
                    break;
                case 0x68:
                    z = 0;
                    func_ov121_020eb5a4(6, 9, arg, 1, 2, z);
                    func_ov121_020eb5a4(7, 0xb, 0x39, 1, 2, z);
                    break;
                case 0x69:
                    z = 0;
                    func_ov121_020eb5a4(6, 9, arg, 1, 2, z);
                    func_ov121_020eb5a4(7, 0xb, 0x39, 1, 2, z);
                    break;
                default:
                    z = 0;
                    func_ov121_020eb5a4(0xa, 0xa, arg, 1, 2, z);
                    break;
            }
            data_ov121_020f6608 |= 0x40;
            data_ov121_020f6d60.a40     = 0x10;
            ((DispCnt *) 0x4000000)->bg = 0x1f;
            data_ov121_020f77f8         = 4;
            break;
    }
}

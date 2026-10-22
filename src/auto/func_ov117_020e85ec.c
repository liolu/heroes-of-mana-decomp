#include "m2c.h"

typedef struct {
    u32 idx : 8;
    u32 mid : 16;
    u32 a : 1;
    u32 mid2 : 1;
    u32 b : 1;
    u32 rest : 5;
} Flags;

typedef struct {
    u8 pad0[4];
    s32 f4;
    u8 pad1[4];
    s32 fC;
    u8 pad2[0xAB0 - 0x10];
    Flags fl;
} D;

typedef struct {
    u32 lo : 8;
    u32 hi : 24;
} Lo8;

void MIi_CpuCopy16(void *, void *, u32);
void func_ov117_020e4fa8(s32, s32);
void func_ov117_020e4fd8();
void func_ov117_020e5018(s32, s32, s32, s32);
s32 func_ov117_020e57a4(s32);
void func_ov117_020e6af8(void *);
extern s16 data_ov117_020f0ee8[];
extern u8 data_ov117_020f0eec[];
extern D data_ov117_020f23e0;
extern u8 data_ov117_020f23f4[];
extern u8 data_ov117_020f27f4[];
extern Lo8 data_ov117_020f2e90;

void func_ov117_020e85ec(void) {
    data_ov117_020f23e0.f4 = 1;
    data_ov117_020f23e0.fC = 1;
    *(s32 *) 0x04001010    = 0x01FF0000 & (data_ov117_020f0ee8[3] << 16);
    *(u16 *) 0x04001048    = (*(u16 *) 0x04001048 & ~0x3F) | 0x3F;
    *(u16 *) 0x0400104A    = (*(u16 *) 0x0400104A & ~0x3F) | 0x3E;
    *(s16 *) 0x04001040    = 0x10E8;
    *(s16 *) 0x04001044    = 0x28A8;
    *(s32 *) 0x04001000    = (*(s32 *) 0x04001000 & ~0xE000) | 0x2000;
    func_ov117_020e4fd8();
    if (data_ov117_020f23e0.fl.a != 0) {
        func_ov117_020e5018(0xF0, 0x10, 9, 1);
    }
    func_ov117_020e5018(0xF4, 0x2C, func_ov117_020e57a4(0x13) + 0xF, 0);
    func_ov117_020e5018(0xF4, 0xB4, func_ov117_020e57a4(0x14) + 0x11, 0);
    func_ov117_020e6af8(data_ov117_020f0eec);
    MIi_CpuCopy16(data_ov117_020f27f4, data_ov117_020f23f4 + data_ov117_020f23e0.fl.idx * 8, 0x80);
    data_ov117_020f2e90.lo = data_ov117_020f2e90.lo + 0x10;
    func_ov117_020e4fa8(0, 0x400);
    if (data_ov117_020f23e0.fl.b != 0) {
        data_ov117_020f23e0.fl.b = 0;
    }
}

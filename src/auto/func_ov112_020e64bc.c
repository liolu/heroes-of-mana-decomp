#include "m2c.h"

typedef struct {
    u32 a : 1;
    u32 b : 1;
    u32 pad : 17;
    u32 c : 4;
    u32 d : 3;
    u32 e : 2;
    u32 f : 1;
    u32 rest : 3;
} Flags;

typedef struct {
    s32 w0;
    s32 w4;
    s32 w8;
    u8 pad[0x488 - 0xC];
    Flags fl;
} Gm;

void func_ov112_020e3be0(void);
void func_ov112_020e42f0(s32);
void func_ov112_020e3c44(s32, s32, s32, s32);
s32 func_ov112_020e7bd8(s32, s32);
s32 func_ov112_020e7c68(s32, s32);
void func_ov112_020e4188(s32, s32, s32);
void func_ov112_020e5be0(void);
void func_ov112_020e6cc8(void);
void func_ov112_020e3b84(s32, s32);
void func_ov112_020e48e0(s32, s32, s32, s32, s32, s32);
void func_ov112_020e44fc(s32, s32, s32, s32, s32);
void func_ov112_020e4a5c(s32, s32, s32, s32, s32, s32);
void func_ov112_020e6894(s32);

extern u8 data_ov112_020ec584[];
extern Gm data_ov112_020ec588;
extern u8 data_ov112_020eca1c[];

void func_ov112_020e64bc(void) {
    s32 r4;
    s32 v;
    u32 d;
    u32 raw;

    data_ov112_020ec588.w0 = 0x200;
    data_ov112_020ec588.w8 = 0x320;
    func_ov112_020e3be0();
    func_ov112_020e42f0(0);
    func_ov112_020e3c44(0x50, 0x10, 0x7C, 1);
    if (data_ov112_020ec588.fl.a == 0) {
        func_ov112_020e3c44(0xF0, 0x10, 0xB, 1);
    }
    func_ov112_020e3c44(0x6C, 0x14, func_ov112_020e7bd8(data_ov112_020ec588.fl.d, 0) + 0x27, 1);
    func_ov112_020e3c44(0x84, 0x14, func_ov112_020e7bd8(data_ov112_020ec588.fl.d, 1) + 0x29, 1);
    func_ov112_020e3c44(0x9C, 0x14, func_ov112_020e7bd8(data_ov112_020ec588.fl.d, 2) + 0x2B, 1);
    if (data_ov112_020ec584[3] != 0) {
        func_ov112_020e3c44(0xB4, 0x14, func_ov112_020e7bd8(data_ov112_020ec588.fl.d, 3) + 0x2D, 1);
    }
    func_ov112_020e3c44(0xD4, 0x14, data_ov112_020ec588.fl.f + 0x2F, 1);
    func_ov112_020e3c44(0xC, 0x2C, func_ov112_020e7bd8(data_ov112_020ec588.fl.c, 0) + 0x19, 1);
    func_ov112_020e3c44(0xC, 0x44, func_ov112_020e7bd8(data_ov112_020ec588.fl.c, 1) + 0x1B, 1);
    func_ov112_020e3c44(0xC, 0x5C, func_ov112_020e7bd8(data_ov112_020ec588.fl.c, 2) + 0x1D, 1);
    func_ov112_020e3c44(0xC, 0x74, func_ov112_020e7bd8(data_ov112_020ec588.fl.c, 3) + 0x1F, 1);
    func_ov112_020e3c44(0xC, 0x8C, func_ov112_020e7bd8(data_ov112_020ec588.fl.c, 4) + 0x21, 1);
    func_ov112_020e3c44(0xC, 0xA4, func_ov112_020e7bd8(data_ov112_020ec588.fl.c, 5) + 0x23, 1);
    func_ov112_020e3c44(0xF4, 0x2C, func_ov112_020e7c68(data_ov112_020ec588.fl.e, 1) + 0x39, 1);
    func_ov112_020e3c44(0xF4, 0x94, func_ov112_020e7c68(data_ov112_020ec588.fl.e, 2) + 0x3B, 1);
    if (*(u8 *) (data_ov112_020eca1c + 0xD55) != 0) {
        func_ov112_020e4188(0, 4, 0x40);
        func_ov112_020e4188(0, 0x98, 0x1A0);
    }
    func_ov112_020e5be0();
    func_ov112_020e6cc8();
    func_ov112_020e3b84(0, 0x400);
    if (data_ov112_020ec588.fl.b == 0) {
        return;
    }
    data_ov112_020ec588.fl.b = 0;
    d                        = data_ov112_020ec588.fl.d;
    switch (d) {
        case 0:
            r4 = 0;
            break;
        case 1:
            r4 = 0;
            break;
        case 2:
            r4 = 0;
            break;
    }
    func_ov112_020e48e0(3, 2, d + 2, 0, 0, 0xA);
    *(volatile u32 *) 0x04000010 = r4 & 0x1FF;
    v                            = *(s32 *) (data_ov112_020eca1c + 0xD48);
    if (v != 0 && v != 0x1FF + 0xFE00) {
        func_ov112_020e44fc(4, 0x15, v, 0, 0);
    } else {
        func_ov112_020e4a5c(4, 0x15, 0x1C, 2, 0, 0);
    }
    func_ov112_020e6894(0);
}

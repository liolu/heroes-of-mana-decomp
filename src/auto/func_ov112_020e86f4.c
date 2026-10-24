#include "m2c.h"

typedef struct {
    u32 w0;
    u8 pad[0x484];
    struct {
        u32 a : 1;
        u32 b : 1;
        u32 p : 17;
        u32 f19 : 4;
        u32 f23 : 3;
        u32 f26 : 2;
        u32 f28 : 1;
        u32 rest : 3;
    } w;
} G;
typedef struct {
    u8 pad[0xd44];
    s32 d44;
    s32 d48;
    s32 d4c;
} H;

extern G data_ov112_020ec588;
extern u8 data_ov112_020ec584[];
extern u8 data_ov112_020eca1c[];

void func_ov112_020e3be0(void);
void func_ov112_020e42f0(s32);
void func_ov112_020e3c44(s32, s32, s32, s32);
s32 func_ov112_020e7bd8(s32, s32);
s32 func_ov112_020e7c68(s32, s32);
void func_ov112_020e4188(s32, s32, s32);
void func_ov112_020e8330(void);
void func_ov112_020e6cc8(void);
void func_ov112_020e3b84(s32, s32);
void func_ov112_020e48e0(s32, s32, s32, s32, s32, s32);
void func_ov112_020e4748(s32, s32, s32, s32, s32);
void func_ov112_020e4878(s32, s32, s32, s32, s32);
void func_ov112_020e4a5c(s32, s32, s32, s32, s32, s32);
void func_ov112_020e6894(s32);

void func_ov112_020e86f4(void) {
    data_ov112_020ec588.w0 = 0x200;
    *(u16 *) 0x4000048     = (*(u16 *) 0x4000048 & ~0x3f) | 0x2f;
    *(u16 *) 0x400004a     = (*(u16 *) 0x400004a & ~0x3f) | 0x3f;
    *(u16 *) 0x4000040     = 0x18e8;
    *(u16 *) 0x4000044     = 0x96c0;
    *(u32 *) 0x4000000     = (*(u32 *) 0x4000000 & ~0xe000) | 0x2000;
    func_ov112_020e3be0();
    func_ov112_020e42f0(0);
    func_ov112_020e3c44(0x50, 0x10, 0x7c, 1);
    if (data_ov112_020ec588.w.a == 0) {
        func_ov112_020e3c44(0xf0, 0x10, 0xb, 1);
    }
    func_ov112_020e3c44(0x6c, 0x14, func_ov112_020e7bd8(data_ov112_020ec588.w.f23, 0) + 0x27, 1);
    func_ov112_020e3c44(0x84, 0x14, func_ov112_020e7bd8(data_ov112_020ec588.w.f23, 1) + 0x29, 1);
    func_ov112_020e3c44(0x9c, 0x14, func_ov112_020e7bd8(data_ov112_020ec588.w.f23, 2) + 0x2b, 1);
    if (data_ov112_020ec584[3] != 0) {
        func_ov112_020e3c44(0xb4, 0x14, func_ov112_020e7bd8(data_ov112_020ec588.w.f23, 3) + 0x2d, 1);
    }
    func_ov112_020e3c44(0xd4, 0x14, data_ov112_020ec588.w.f28 + 0x2f, 1);
    func_ov112_020e3c44(0xc, 0x2c, func_ov112_020e7bd8(data_ov112_020ec588.w.f19, 6) + 0x19, 1);
    func_ov112_020e3c44(0xc, 0x44, func_ov112_020e7bd8(data_ov112_020ec588.w.f19, 7) + 0x1b, 1);
    func_ov112_020e3c44(0xc, 0x5c, func_ov112_020e7bd8(data_ov112_020ec588.w.f19, 8) + 0x25, 1);
    func_ov112_020e3c44(0xf4, 0x2c, func_ov112_020e7c68(data_ov112_020ec588.w.f26, 1) + 0x39, 1);
    func_ov112_020e3c44(0xf4, 0x94, func_ov112_020e7c68(data_ov112_020ec588.w.f26, 2) + 0x3b, 1);
    if (data_ov112_020eca1c[0xd55] != 0) {
        func_ov112_020e4188(0, 0, 0x40);
        func_ov112_020e4188(0, 0x20, 0xc0);
    }
    func_ov112_020e8330();
    func_ov112_020e6cc8();
    func_ov112_020e3b84(0, 0x400);
    if (data_ov112_020ec588.w.b == 0) {
        return;
    }
    data_ov112_020ec588.w.b = 0;
    func_ov112_020e48e0(3, 2, data_ov112_020ec588.w.f23 + 2, 0, 0, 0xa);
    *(u32 *) 0x4000010 = 6;
    if (((H *) data_ov112_020eca1c)->d4c != 0) {
        func_ov112_020e4748(5, 0x15, ((H *) data_ov112_020eca1c)->d4c, 0, 0);
    } else if (((H *) data_ov112_020eca1c)->d44 != 0) {
        func_ov112_020e4878(5, 0x15, ((H *) data_ov112_020eca1c)->d44, 0, 0);
    } else {
        func_ov112_020e4a5c(4, 0x15, 0x1c, 2, 0, 0);
    }
    func_ov112_020e6894(1);
}

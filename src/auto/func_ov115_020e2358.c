#include "m2c.h"
typedef struct {
    u32 a : 9;
    u32 f9 : 1;
    u32 f10 : 2;
    u32 rest : 20;
} W0;
typedef struct {
    u32 lo : 8;
    u32 rest : 24;
} W10;
typedef struct {
    u32 lo : 8;
    u32 f8 : 8;
    u32 f16 : 8;
    u32 f24 : 8;
} W98;
typedef struct {
    u32 lo : 8;
    u32 f8 : 8;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 b18 : 1;
    u32 b19 : 1;
    u32 b20 : 1;
    u32 b21 : 1;
    u32 f22 : 2;
    u32 f24 : 2;
    u32 b26 : 1;
    u32 rest : 5;
} W9C;
typedef struct {
    W0 w0;
    u8 p4[0x10 - 4];
    W10 w10;
    u8 p14[0x448 - 0x14];
    s32 f448;
    u8 p44c[0xc90 - 0x44c];
    s32 fc90;
    s32 fc94;
    W98 w98;
    W9C w9c;
} G;
void func_ov115_020e216c(void *);
s32 CheckSavePossible(void);
s32 func_ov115_020e67c0(s32, s32, s32, s32, s32, void *);
void func_ov115_020e58fc(void);
void func_ov115_020e2568(void);
void func_ov115_020e74b0(void *);
extern u8 data_ov115_020e8d28[];
extern G data_ov115_020e8d20;
extern u8 data_ov115_020e95f0[];
extern u8 data_ov115_020e9970[];
extern u8 func_ov115_020e213c[];

void func_ov115_020e2358(void) {
    u32 t;
    u32 *p;
    u32 v;
    func_ov115_020e216c(data_ov115_020e8d28);
    data_ov115_020e8d20.w10.lo  = 0x34;
    data_ov115_020e8d20.w9c.b16 = 0;
    data_ov115_020e8d20.w9c.b17 = 1;
    data_ov115_020e8d20.w9c.b18 = 1;
    data_ov115_020e8d20.w9c.b19 = 0;
    data_ov115_020e8d20.w9c.b21 = 0;
    data_ov115_020e8d20.w98.f16 = 0x34;
    data_ov115_020e8d20.w98.f24 = 0x34;
    data_ov115_020e8d20.w9c.lo  = 0x34;
    data_ov115_020e8d20.w9c.f8  = 0;
    data_ov115_020e8d20.w9c.b26 = 0;
    if (CheckSavePossible() != 0) {
        data_ov115_020e8d20.w98.f8 = 1;
        data_ov115_020e8d20.f448   = 0x7c0;
        data_ov115_020e8d20.fc94   = func_ov115_020e67c0(0x30, 0x10, 3, 0, 0, data_ov115_020e9970);
        data_ov115_020e8d20.fc90   = func_ov115_020e67c0(0x64, 0, 7, 0, 0, data_ov115_020e95f0);
    } else {
        if (data_ov115_020e8d20.w9c.f22 == 0) {
            *(u32 *) &data_ov115_020e8d20.w98 = (*(u32 *) &data_ov115_020e8d20.w98 & ~0xff00) | 0x1800;
            func_ov115_020e58fc();
        } else {
            *(u32 *) &data_ov115_020e8d20.w98 = (*(u32 *) &data_ov115_020e8d20.w98 & ~0xff00) | 0x400;
            func_ov115_020e58fc();
        }
    }
    func_ov115_020e2568();
    if (data_ov115_020e8d20.w0.f9) {
        data_ov115_020e8d20.w0.f10 = 1;
    } else {
        data_ov115_020e8d20.w0.f10 = 0;
    }
    func_ov115_020e74b0(func_ov115_020e213c);
}

#include "m2c.h"

typedef struct {
    u8 pad[0x2c];
    u8 *arr;
} Holder;

typedef struct {
    u32 lo : 16;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 b18 : 1;
    u32 b19 : 1;
    u32 rest : 12;
} Tc;

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 b5 : 1;
    u32 b6 : 1;
    u32 b7 : 1;
    u32 f8 : 8;
    u32 rest : 16;
} Ra88;

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 rest : 28;
} R498;

typedef struct {
    u32 rest : 24;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 b26 : 1;
    u32 b27 : 1;
    u32 f28 : 2;
    u32 b30 : 1;
    u32 b31 : 1;
} Rc28;

typedef struct {
    u32 b0 : 1;
    u32 rest : 31;
} Rc2c;

typedef struct {
    u32 pad : 22;
    u32 idx : 8;
    u32 rest : 2;
} Elem;

typedef struct {
    u32 w0;
    u32 pad4;
    Tc t8;
    Tc tc;
    u8 pad10[0x54 - 0x10];
    Tc t54;
    u8 pad58[0x9C - 0x58];
    Tc t9c;
    u8 padA0[0xE4 - 0xA0];
    Tc te4;
    u8 padE8[0x130 - 0xE8];
    Tc t130;
    u32 w134;
    u8 pad138[0x498 - 0x138];
    R498 r498;
    u8 pad49c[0xA88 - 0x49C];
    Ra88 ra88;
} IoB;

typedef struct {
    u8 pad[0xC28];
    Rc28 c28;
    Rc2c c2c;
} IoA;

typedef struct {
    u8 pad[0x2C];
    u16 h2c;
} IoC;

s32 func_0201509c(void *);
void func_02015130(void *);
void func_ov121_020ea0c8(void);
void func_ov121_020ea14c(void);
void func_ov121_020ef73c(s32);
extern Holder *data_0203673c;
extern IoB data_ov121_020f5b80;
extern IoC data_ov121_020f5c80;
extern IoA data_ov121_020f6b80;

void func_ov121_020ea234(void) {
    u8 sp0[8];
    s32 i;
    s32 off;
    s32 j;

    data_ov121_020f6b80.c28.b24  = 0;
    data_ov121_020f6b80.c28.b25  = 1;
    data_ov121_020f6b80.c28.b26  = 1;
    data_ov121_020f6b80.c28.b31  = 0;
    data_ov121_020f5b80.r498.b3  = 0;
    data_ov121_020f5b80.ra88.b0  = 0;
    data_ov121_020f5b80.ra88.b2  = 0;
    data_ov121_020f5b80.ra88.b1  = 0;
    data_ov121_020f5b80.ra88.b3  = 0;
    data_ov121_020f5b80.ra88.b4  = 0;
    data_ov121_020f5b80.ra88.b5  = 0;
    data_ov121_020f5b80.ra88.b6  = 0;
    data_ov121_020f5b80.ra88.f8  = 0xFF;
    data_ov121_020f5c80.h2c      = 0;
    data_ov121_020f5b80.t130.b19 = 0;
    data_ov121_020f5b80.t130.b18 = 0;
    data_ov121_020f5b80.t130.b16 = 0;
    data_ov121_020f5b80.t130.b17 = 0;
    data_ov121_020f5b80.w134     = 0;
    data_ov121_020f5b80.t54.b16  = 0;
    data_ov121_020f5b80.t54.b17  = 0;
    data_ov121_020f5b80.t54.b18  = 0;
    data_ov121_020f5b80.te4.b16  = 0;
    data_ov121_020f5b80.te4.b17  = 0;
    data_ov121_020f5b80.te4.b18  = 0;
    data_ov121_020f5b80.tc.b16   = 0;
    data_ov121_020f5b80.tc.b17   = 0;
    data_ov121_020f5b80.tc.b18   = 0;
    data_ov121_020f5b80.t9c.b16  = 0;
    data_ov121_020f5b80.t9c.b17  = 0;
    data_ov121_020f5b80.t9c.b18  = 0;
    data_ov121_020f5b80.t8.b16   = 0;
    data_ov121_020f5b80.t8.b17   = 0;
    data_ov121_020f5b80.t8.b18   = 0;
    data_ov121_020f5b80.w0       = 0x31;
    data_ov121_020f5b80.t130.lo  = 0x31;
    data_ov121_020f5b80.t54.lo   = 0x31;
    data_ov121_020f5b80.te4.lo   = 0x31;
    data_ov121_020f5b80.tc.lo    = 0x31;
    data_ov121_020f5b80.t9c.lo   = 0x31;
    data_ov121_020f6b80.c28.b27  = 0;
    data_ov121_020f6b80.c28.f28  = 0;
    data_ov121_020f6b80.c28.b30  = 0;
    data_ov121_020f6b80.c2c.b0   = 0;
    data_ov121_020f5b80.r498.b2  = 0;
    for (i = 0; i < 9; i++) {
        func_ov121_020ef73c(i);
    }
    func_ov121_020ea14c();
    j   = 0x32;
    off = 0x3E8;
    do {
        s32 t = j;
        j++;
        ((Elem *) (data_0203673c->arr + off + 0x10))->idx = (u8) t;
        off += 0x14;
    } while (j <= 0x5C);
    func_ov121_020ea0c8();
    if (func_0201509c(sp0) == 0) {
        return;
    }
    func_02015130(sp0);
}

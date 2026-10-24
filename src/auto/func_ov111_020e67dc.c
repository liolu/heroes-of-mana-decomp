#include "m2c.h"

typedef struct A {
    u32 f0 : 1;
    u32 rest : 31;
    u8 pad[0x4C];
} A;
typedef struct B {
    u8 pad[0x2A];
    u16 h2a;
    u32 f2c : 1;
    u32 r2c : 31;
    u8 pad2[0xC];
    u32 lo : 8;
    u32 b8 : 1;
    u32 mid : 8;
    u32 hi : 15;
} B;
typedef struct C {
    u8 pad[0x20];
    u16 h20;
    u8 pad2[0x4EA];
    u16 h50c;
    u16 h50e;
} C;
s32 func_ov111_020e5d98(s32);
extern A data_ov111_020ec3f4[];
extern B data_ov111_020eca98[];
extern C *data_ov111_020f1bd8;

void func_ov111_020e67dc(void) {
    if (data_ov111_020ec3f4[func_ov111_020e5d98(1)].f0 != 0) {
        C *c                            = data_ov111_020f1bd8;
        data_ov111_020eca98[c->h20].hi  = func_ov111_020e5d98(1);
        data_ov111_020eca98[c->h20].b8  = 1;
        data_ov111_020eca98[c->h20].h2a = 0;
        data_ov111_020eca98[c->h20].f2c = 0;
        c->h50e |= 2;
    }
    data_ov111_020f1bd8->h50c += 3;
}

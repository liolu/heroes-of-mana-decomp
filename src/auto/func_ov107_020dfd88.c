#include "m2c.h"

typedef struct U {
    u8 pad[0x10];
    u16 f10;
    u16 f12;
} U;

typedef struct A {
    u8 pad[0xe8];
    U *fe8;
} A;

typedef struct G {
    u8 pad[0x40];
    s32 f40;
    u8 pad2[0x68 - 0x44];
    s32 f68;
    u8 pad3[0x8c - 0x6c];
    u32 f8c;
} G;

void ActionWazaByLogic(A *, s32, s32, s32);
s32 func_0202d478(s32, u16);
void ReadySetUpWazaAt(A *);
s32 distanceForBattle(s32, A *);
void changeOcc(s32, A *, s32, s32);
extern G *data_ov000_02051548;

void func_ov107_020dfd88(A *a, s32 b) {
    u32 fl;
    if (data_ov000_02051548->f40 == 0) {
        data_ov000_02051548->f68 = 0;
    }
    fl = data_ov000_02051548->f8c & 0x200000;
    if (data_ov000_02051548->f68 >= 10 && fl != 0x200000) {
        ActionWazaByLogic(a, 0xd, 0x145, -1);
        data_ov000_02051548->f8c |= 0x200000;
        data_ov000_02051548->f68 += 1;
        return;
    }
    data_ov000_02051548->f68 += 1;
    if (func_0202d478(a->fe8->f10 * 100, a->fe8->f12) >= 30) {
        return;
    }
    ReadySetUpWazaAt(a);
    if (distanceForBattle(b, a) != 1) {
        return;
    }
    changeOcc(3, a, b, 0);
}

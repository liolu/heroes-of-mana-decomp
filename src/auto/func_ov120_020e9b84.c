#include "m2c.h"

typedef struct {
    u8 pad[0x1090];
    u32 a[2];
} W;

typedef struct {
    u8 pad[0x2c];
    W *p;
} P;

typedef struct {
    u8 pad[0xa14];
    u32 f;
} Q;

extern P *data_0203673c;
extern Q data_ov120_020f46dc;
void GX_SetBankForBG(s32);
void func_ov120_020e9d5c(void);
void func_ov120_020e9e28(void);
s32 func_ov120_020ea838(void);
void func_ov120_020eaa64(void);
void func_ov120_020ea634(void);
void func_ov120_020f0044(void);
void func_ov120_020f00d8(void);
void func_ov120_020eb0fc(s32, s32);
s32 func_ov120_020eb63c(void);
void func_ov120_020eb1a0(s32, s32);
void func_ov120_020ea954(void);

s32 func_ov120_020e9b84(void) {
    s32 r4;
    s32 i;
    u32 acc;

    func_ov120_020e9d5c();
    func_ov120_020e9e28();
    if (func_ov120_020ea838() != 1) {
        return -1;
    }
    func_ov120_020eaa64();
    data_ov120_020f46dc.f &= ~0x1000000;
    data_ov120_020f46dc.f &= ~0x400000;
    func_ov120_020ea634();
    i   = 0;
    acc = 0;
    do {
        acc |= data_0203673c->p->a[i];
        i++;
    } while (i < 2);
    if (acc == 0) {
        r4 = -1;
    } else {
        func_ov120_020f0044();
        func_ov120_020f00d8();
        func_ov120_020eb0fc(-16, 3);
        r4 = func_ov120_020eb63c();
        func_ov120_020eb1a0(-16, 3);
    }
    func_ov120_020ea954();
    func_ov120_020e9d5c();
    GX_SetBankForBG(1);
    return r4;
}

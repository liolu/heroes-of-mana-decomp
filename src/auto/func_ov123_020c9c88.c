/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_0200a7b8(void);
s32 func_0200a7ec(void);
void func_ov123_02069df4(s32, u16, u16, s32, s32, s32, s32, s32);
void func_ov123_02069f3c(void *, s32, u16, u16, s32);
void func_ov123_020c9970(void *, s32);
s32 func_ov123_020ca510(s32, s32);
s32 func_ov123_020cb6ac(s32, void *, s32, s32);
typedef struct Sz {
    u16 w;
    u16 h;
} Sz;
typedef struct Obj {
    u8 pad[0x20];
    void *self;
    s32 f24;
    s32 f28;
    s32 f2c;
    s32 f30;
    s32 f34;
} Obj;
extern Sz data_ov123_020d8454[];
extern u16 data_ov123_020d8450[];
typedef struct Rec12 {
    s32 a;
    s32 b;
    s32 c;
} Rec12;
typedef struct Ctx {
    Rec12 r[0x97];
    u8 pad0[4];
    Obj o[2];
    u8 pad[0x794 - 0x718 - 0x70];
    u8 t[2];
} Ctx;
extern Ctx *data_ov123_020e4724;
extern void func_ov123_020c9bb0(void);
Obj *func_ov123_020c9c88(s32 arg0, s32 arg1) {
    Obj *o;
    s32 e;
    u16 h;
    u16 w;
    h      = data_ov123_020d8454[arg0].h;
    w      = data_ov123_020d8454[arg0].w;
    o      = &data_ov123_020e4724->o[arg0];
    o->f30 = func_ov123_020ca510((w * h) << 5, 0x20);
    if (arg0 == 1) {
        *(volatile u16 *) 0x04001008 &= ~0x40;
        *(volatile u16 *) 0x04001008 = (*(volatile u16 *) 0x04001008 & 0x43) | 0xC00;
    } else {
        *(volatile u16 *) 0x04000008 &= ~0x40;
        *(volatile u16 *) 0x04000008 = (*(volatile u16 *) 0x04000008 & 0x43) | 0xC00;
    }
    func_ov123_02069f3c(o, o->f30, w, h, 4);
    e       = (s32) &data_ov123_020e4724->r[arg1];
    o->self = o;
    o->f24  = e;
    o->f28  = 1;
    o->f2c  = 1;
    func_ov123_02069df4(arg0 == 1 ? func_0200a7ec() : func_0200a7b8(), w, h, 0, 0, 0x20, data_ov123_020d8450[arg0], 0xF);
    func_ov123_020c9970(o, 0);
    o->f34 = func_ov123_020cb6ac(1, func_ov123_020c9bb0, (s32) &data_ov123_020e4724->t[arg0], 0xC8);
    return o;
}

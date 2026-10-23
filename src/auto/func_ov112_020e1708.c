#include "m2c.h"
typedef struct S {
    u16 a;
    u8 pad;
    u8 b;
} S;
typedef struct Rec {
    u32 pad : 16;
    u32 f : 1;
    u32 rest : 15;
    u8 pad2[0x2d0 - 4];
} Rec;
typedef struct G {
    u8 pad[0x28];
    Rec *recs;
} G;
extern S data_ov112_020ec584;
extern G *data_0203673c;
extern void func_ov112_020e1870(void);
extern void func_ov112_020e191c(void);
extern s32 func_ov112_020e2284(void);
extern void func_ov112_020e2728(void);
extern void func_ov112_020e1d9c(void);
extern void func_ov112_020ea638(void);
extern void func_ov112_020eaa90(void);
extern void func_ov112_020e9abc(void);
extern void func_ov112_020e9ba8(void);
extern void func_ov112_020e278c(s32, s32, s32);
extern s32 func_ov112_020e2b3c(void);
extern void func_ov112_020e2830(s32, s32, s32);
extern void func_ov112_020e2370(void);
extern void GX_SetBankForBG(s32);
s32 func_ov112_020e1708(u16 a, u8 b) {
    s32 r;
    *(u8 *) ((u8 *) &data_ov112_020ec584 + 2) = b;
    func_ov112_020e1870();
    func_ov112_020e191c();
    if (func_ov112_020e2284() != 1) {
        return 1;
    }
    data_ov112_020ec584.a = a;
    if (data_0203673c->recs[data_ov112_020ec584.a].f == 0) {
        return 1;
    }
    func_ov112_020e2728();
    func_ov112_020e1d9c();
    func_ov112_020ea638();
    func_ov112_020eaa90();
    func_ov112_020e9abc();
    func_ov112_020e9ba8();
    func_ov112_020e278c(-16, 3, 2);
    r = func_ov112_020e2b3c();
    func_ov112_020e2830(-16, 3, 2);
    func_ov112_020e2370();
    func_ov112_020e1870();
    GX_SetBankForBG(1);
    return r;
}

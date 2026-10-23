#include "m2c.h"

typedef struct S {
    u8 p0[0xd];
    u8 cnt;
    u8 pe[2];
    void *p10;
    u8 b14;
    u8 b15;
    u8 b16;
    u8 b17;
    u8 p18[8];
    s32 w20;
    u8 p24[0xe8 - 0x24];
    s32 we8;
    u32 wec;
    u32 wf0;
    u32 arr[0x20];
    u8 p17c[0x19c - 0x174];
    void *p19c;
    u8 p1a0[0x1b2 - 0x1a0];
    u16 h1b2;
    u8 p1b4[0x1d8 - 0x1b4];
    s32 w1d8;
    u8 p1dc[0x200 - 0x1dc];
    s32 w200;
    s32 w204;
    u8 p208[0x3cc - 0x208];
    u8 b3cc;
} S;
S *func_ov123_0209d368(void);
void func_ov123_0208d4cc(void *);
void func_ov123_0208b878(void *);
void func_ov123_0209f114(void);
void func_ov123_0209d354(s32);
void func_ov123_0209ffec(s32, s32, s32);
s32 func_ov123_0209efd8(s32);
s32 func_ov123_0209ea64(u32, s32);
void func_ov123_0209f158(s32);
u64 func_0200f510(void);

s32 func_ov123_0209fc90(s32 a) {
    S *t;
    S *u;
    s32 i;
    s32 fl;
    if (func_ov123_0209d368()->b17 != 0 && ((t = func_ov123_0209d368()), (u = func_ov123_0209d368()), t->w20 == u->w200)) {
        fl = 0;
    } else {
        fl = 1;
    }

    if (fl != 0) {
        func_ov123_0209d368()->b17 = 0;
        func_ov123_0209d368()->w20 = 0;
        func_ov123_0208d4cc(func_ov123_0209d368()->p10);
    }
    if (func_ov123_0209d368()->cnt < 0x1f) {
        t                                      = func_ov123_0209d368();
        t->arr[func_ov123_0209d368()->cnt + 1] = 0;
    }
    func_ov123_0209d368()->b3cc = 0xff;
    if (func_ov123_0209d368()->p19c != 0) {
        func_ov123_0208b878(func_ov123_0209d368()->p19c);
        func_ov123_0209d368()->p19c = 0;
    }
    t                           = func_ov123_0209d368();
    t->b14                      = func_ov123_0209d368()->cnt;
    func_ov123_0209d368()->w204 = 0;
    if (fl == 0) {
        if (func_ov123_0209d368()->b15 != 3) {
            func_ov123_0209f114();
        }
    } else if (func_ov123_0209d368()->b15 == 0) {
        u64 v;
        func_ov123_0209d354(3);
        func_ov123_0209d368()->we8 = 2;
        t                          = func_ov123_0209d368();
        v                          = func_0200f510();
        *(u64 *) &t->wec           = v;
    } else if (func_ov123_0209d368()->b15 == 1) {
        func_ov123_0209d354(4);
        func_ov123_0209ffec(1, 0, 0);
    } else if (func_ov123_0209d368()->b15 == 2) {
        func_ov123_0209d354(14);
        func_ov123_0209d368()->w1d8 = 0;
        func_ov123_0209d368()->h1b2 = 0;
        func_ov123_0209efd8(a);
        for (i = 1; i <= func_ov123_0209d368()->cnt; i++) {
            if (func_ov123_0209ea64(func_ov123_0209d368()->arr[i], 13) == 0) {
                return 0;
            }
        }
        if (func_ov123_0209d368()->cnt == 0) {
            func_ov123_0209f158(2);
        }
    }
    return 1;
}

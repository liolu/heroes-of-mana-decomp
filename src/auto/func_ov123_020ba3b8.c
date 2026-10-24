/* compiler: 1.2/sp3 */
/* near start: 10 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct BT {
    u8 b[5];
} BT;
typedef struct FT {
    void (*f[5])(void *);
} FT;
typedef struct H {
    u16 a0;
    u16 a1;
    u16 lo : 10;
    u16 m : 2;
    u16 hi : 4;
} H;
typedef struct G {
    s32 f0;
    H *f4;
    u8 s[0xc];
    u8 b14;
} G;
extern BT data_ov123_020d7f7c;
extern FT data_ov123_020d7f98;
extern G *data_ov123_020e465c;
extern u8 data_ov123_020ddf78[];
extern void func_ov123_020ba284(void);
G *func_ov123_020ca4ec(s32, s32);
void func_ov123_020b2398(s32 *, s32);
s32 func_020213f0(const void *, const void *, s32);
void MI_CpuFill8(void *, u8, u32);
void func_ov123_020ba2e0(void);
void func_ov123_020ae8d8(s32);
void func_ov123_020ae2a4(s32, s32, s32);
void func_ov123_020ae530(s32);
s32 func_ov123_020c9c88(s32, s32);
H *func_ov123_020c92f8(s32, s32);
void func_ov123_020b9ac8(void);
void func_ov123_020b9b28(void);
void func_ov123_020b2410(void (*)(void));

void func_ov123_020ba3b8(void) {
    G *g;
    BT bt;
    s32 idx;
    FT ft;
    ft                  = data_ov123_020d7f98;
    bt                  = data_ov123_020d7f7c;
    data_ov123_020e465c = func_ov123_020ca4ec(0x18, 4);
    func_ov123_020b2398(&idx, 0);
    ft.f[idx](data_ov123_020e465c->s);
    g = data_ov123_020e465c;
    if (func_020213f0(g->s, data_ov123_020ddf78, 3) != 0) {
        g->b14 = 3;
    } else {
        MI_CpuFill8(g->s, 0, 0xc);
        data_ov123_020e465c->b14 = 0;
    }
    func_ov123_020ba2e0();
    func_ov123_020ae8d8(idx + 0xb);
    func_ov123_020ae2a4(bt.b[idx], -1, 0);
    func_ov123_020ae530(2);
    data_ov123_020e465c->f0    = func_ov123_020c9c88(0, 0);
    data_ov123_020e465c->f4    = func_ov123_020c92f8(0, 0x3f);
    data_ov123_020e465c->f4->m = 3;
    func_ov123_020b9ac8();
    func_ov123_020b9b28();
    func_ov123_020b2410(func_ov123_020ba284);
}

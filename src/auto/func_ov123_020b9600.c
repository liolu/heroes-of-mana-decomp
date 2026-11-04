/* compiler: 1.2/sp3 */
/* near start: 1 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct Q {
    u16 a0;
    u16 a2;
    u16 lo : 10;
    u16 mode : 2;
    u16 hi : 4;
} Q;
typedef struct S {
    s32 f0;
    Q *q;
    u8 body[0x21];
    s8 b29;
} S;

void func_ov123_020ae2a4(s32, s8, s32);
void func_ov123_020ae530(s32);
void func_ov123_020ae8d8(s32);
void func_ov123_020b2398(s32 *, s32 *);
void func_ov123_020b2410(void *);
void func_ov123_020b8e6c(void);
void func_ov123_020b8ee8(void);
void func_ov123_020b9528(void);
void func_ov123_020c3300(void *);
Q *func_ov123_020c92f8(s32, s32);
s32 func_ov123_020c9c88(s32, s32);
S *func_ov123_020ca4ec(s32, s32);
s8 func_ov123_020cb28c(void *, s32);
extern u8 data_ov123_020d7f48[];
extern S *data_ov123_020e4658;
extern void func_ov123_020b94cc(void);

void func_ov123_020b9600(void) {
    s32 sp4;
    s32 sp8;
    u8 sp[2];
    sp[0]               = data_ov123_020d7f48[0];
    sp[1]               = data_ov123_020d7f48[1];
    data_ov123_020e4658 = func_ov123_020ca4ec(0x2C, 4);
    func_ov123_020b2398(&sp4, &sp8);
    if (sp4 == 0) {
        func_ov123_020c3300((u8 *) data_ov123_020e4658 + 8);
        data_ov123_020e4658->b29 = func_ov123_020cb28c((u8 *) data_ov123_020e4658 + 8, 0x20);
    }
    func_ov123_020b9528();
    func_ov123_020ae8d8(sp4 + 9);
    if (sp8 == 1) {
        func_ov123_020ae2a4(0x35, -1, 0);
    } else {
        s32 t = sp[sp4];
        func_ov123_020ae2a4(t, -1, 0);
    }
    func_ov123_020ae530(2);
    data_ov123_020e4658->f0      = func_ov123_020c9c88(0, 0);
    data_ov123_020e4658->q       = func_ov123_020c92f8(0, 0x3E);
    data_ov123_020e4658->q->mode = 3;
    func_ov123_020b8e6c();
    func_ov123_020b8ee8();
    func_ov123_020b2410(func_ov123_020b94cc);
}

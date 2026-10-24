/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S {
    u8 pad[0xc0];
    u8 c0[4];
    u8 c4[4];
    u8 c8[8];
    u8 d0;
    u8 pad2[0xf0 - 0xd1];
} S;

typedef struct Cur {
    S s;
    u8 f0[4];
    u8 f4;
    u8 f5;
    u8 f6;
} Cur;

typedef struct G {
    u8 pad[0x400];
    Cur cur;
} G;

void MI_CpuFill8(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);
s8 func_ov123_020a57b4(void *);
void func_ov123_020c2b08(u8);
extern G *data_ov123_020e46d0;

void func_ov123_020c2fac(void) {
    Cur *c  = &data_ov123_020e46d0->cur;
    S *slot = (S *) ((u8 *) data_ov123_020e46d0 + (c->f4 << 8));
    *slot   = c->s;
    if (c->f5 != 0) {
        MI_CpuFill8(slot->c0, 0, 4);
        MI_CpuFill8(slot->c4, 0, 4);
        slot->d0 = 0;
    } else {
        MI_CpuCopy8(c->s.c0, slot->c0, 4);
        MI_CpuCopy8(c->s.c4, slot->c4, 4);
        slot->d0 = func_ov123_020a57b4(c->f0);
    }
    if (c->f6 != 0) {
        MI_CpuFill8(slot->c8, 0, 8);
    } else {
        MI_CpuCopy8(c->s.c8, slot->c8, 8);
    }
    func_ov123_020c2b08(c->f4);
}

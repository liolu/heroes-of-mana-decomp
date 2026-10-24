/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct R {
    u8 pad[0x20];
    u8 mid[0x30];
    u32 f50;
    s32 f54;
    u16 f58;
    u8 f5a;
    u8 pad2;
} R;
typedef struct O {
    u8 a[0x30];
    u8 ok;
    u8 pad[0x43];
    u8 b[0x20];
} O;
extern R data_ov123_020e0c04[];
s32 func_0200fa98(void);
void func_0200faac(s32);
u64 func_0200f510(void);
void MI_CpuCopy8(void *, void *, s32);

void func_ov123_020776f0(O *o, s32 a, s32 b) {
    s32 irq;
    s32 i;
    R *r;
    irq   = func_0200fa98();
    r     = data_ov123_020e0c04;
    o->ok = 0;
    for (i = 0; i < 4; i++, r++) {
        if (r->f5a != 0 && r->f54 == a && r->f58 == b) {
            MI_CpuCopy8(r, o->b, 0x20);
            MI_CpuCopy8(r->mid, o, 0x30);
            r->f50 = (u32) (func_0200f510() >> 16);
            o->ok  = 1;
            break;
        }
    }
    func_0200faac(irq);
}

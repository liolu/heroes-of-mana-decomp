/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S {
    u8 pad0[0xd];
    u8 cnt;
    u8 pad1[0xf4 - 0xe];
    void *f4[0x2b];
    s32 st;
    u8 pad2[8];
    u8 c1ac;
    u8 pad3[0x1d8 - 0x1ad];
    u32 mask;
    u8 pad4[0x1e8 - 0x1dc];
    u64 t;
    u8 pad5[0x2d0 - 0x1f0];
    u8 bit[8];
} S;

S *func_ov123_0209d368(void);
u64 func_0200f510(void);
u64 _ll_udiv(u64, u64);
s32 func_ov123_0209ea64(void *, s32);
s32 func_ov123_0209ee60(u32);
void func_ov123_0209f158(s32);

s32 func_ov123_0209e624(void) {
    u64 dt;
    s32 i;
    S *s;

    if (func_ov123_0209d368()->st == 8 || func_ov123_0209d368()->st == 0xe || func_ov123_0209d368()->st == 0xf) {
        dt = (func_0200f510() - func_ov123_0209d368()->t) * 64 / 0x82ea;
    } else {
        return 1;
    }
    switch (func_ov123_0209d368()->st) {
        case 8:
            if (dt > 0x1770) {
                if (func_ov123_0209ea64(func_ov123_0209d368()->f4[0], 0xe) == 0) {
                    return 0;
                }
            }
            break;
        case 0xe:
            if (dt > 0x1770) {
                func_ov123_0209d368()->c1ac++;
                if (func_ov123_0209d368()->c1ac > 5) {
                    if (func_ov123_0209ee60(func_ov123_0209d368()->mask) == 0) {
                        return 0;
                    }
                    if (func_ov123_0209d368()->cnt != 0) {
                        func_ov123_0209d368()->c1ac = 0;
                        s                           = func_ov123_0209d368();
                        s->t                        = func_0200f510();
                    } else {
                        func_ov123_0209f158(2);
                    }
                } else {
                    for (i = 1; i <= func_ov123_0209d368()->cnt; i++) {
                        s = func_ov123_0209d368();
                        if ((s->mask & (1 << *(u8 *) (0x2d0 + (u8 *) func_ov123_0209d368() + i))) == 0) {
                            if (func_ov123_0209ea64(func_ov123_0209d368()->f4[i], 0xd) == 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
            break;
        case 0xf:
            if (dt > *(u16 *) ((u8 *) func_ov123_0209d368() + 0x1b2)) {
                func_ov123_0209f158(2);
            }
            break;
    }
    return 1;
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 s0;
    u8 pad0[0x15 - 4];
    u8 b15;
    u8 pad1[0x1a6 - 0x16];
    u8 b1a6;
    u8 pad2[0x3cc - 0x1a7];
    u8 b3cc;
    u8 pad3[0x300 + 0xce - 0x3cd];
    u16 s3ce;
    s32 s3d0;
    u8 buf[0x454 - 0x3d4];
    s32 s454;
    s32 s458;
    u64 t;
} S;

extern u8 data_ov123_020dd3bc[];
extern u8 data_ov123_020dd418[];
S *func_ov123_0209d368(void);
s32 func_ov123_020a1a28(s32, s32, s32, s32 *, s32);
s32 func_0200cdbc(u8 *, s32, u8 *, s32);
void MI_CpuCopy8(void *, void *, s32);
s32 func_ov123_020a1984(s32, s32, s32, u8 *);
u64 func_0200f510(void);
void MIi_CpuCopy32(void *, void *, s32);

s32 func_ov123_020a1b40(s32 a, s32 b, s32 c, s32 d, s32 *e, s32 f) {
    u8 big[0x200];
    u8 small[0x10];
    s32 len;
    s32 i;
    s32 n;
    s32 r;
    S *g;
    u8 *dst;

    len = 0;
    if (func_ov123_0209d368()->b15 == 0 || ((func_ov123_0209d368()->b15 == 3 || func_ov123_0209d368()->b1a6 != 0) && a == 6)) {
        r = func_ov123_020a1a28(a, c, d, e, f);
    } else {
        if (e != NULL) {
            if (f != 0) {
                len = func_0200cdbc(big, 0x200, data_ov123_020dd3bc, e[0]);
                for (i = 1; i < f; i++) {
                    n = func_0200cdbc(small, 0x10, data_ov123_020dd418, e[i]);
                    MI_CpuCopy8(small, big + len, n);
                    len += n;
                }
            }
        }
        big[len] = 0;
        r        = func_ov123_020a1984(func_ov123_0209d368()->s0, a, b, big);
    }
    if (a == 2 || a == 6 || (u8) (a + 0xf8) <= 1) {
        func_ov123_0209d368()->b3cc = a;
        func_ov123_0209d368()->s3ce = d;
        func_ov123_0209d368()->s3d0 = c;
        func_ov123_0209d368()->s454 = b;
        func_ov123_0209d368()->s458 = f;
        g                           = func_ov123_0209d368();
        g->t                        = func_0200f510();
        if (e != NULL) {
            if (f != 0) {
                dst = func_ov123_0209d368()->buf;
                MIi_CpuCopy32(e, dst, f * 4);
            }
        }
    }
    return r;
}

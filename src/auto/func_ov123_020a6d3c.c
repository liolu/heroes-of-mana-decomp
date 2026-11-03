/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern s16 data_ov123_020e20e8;

s16 func_ov123_020a66fc(void);
void func_ov123_020a68d8(void *dst, void *src, s32 n);
s8 func_ov123_020a6b98(s32 a, s32 b);
s32 func_ov123_020a8cc0(s32 a);
void func_ov123_020a8cac(s32 a);
void func_ov123_020a6c3c(void *o, void *x, s32 n, s32 y);
void func_ov123_020a6c0c(void *o, s32 a, s32 b, s32 c);

typedef struct {
    s16 sp0;
    u8 pad0[2];
    u8 sp4[8];
    s32 spc;
    s32 pad;
} Fr20;

s32 func_ov123_020a6d3c(s32 a0, s32 a1, s32 a2, u8 *a3, s16 *a4, s16 *a5, s32 a6) {
    Fr20 f;

    *a3   = func_ov123_020a6b98(a0, a2);
    f.spc = func_ov123_020a8cc0(a2);
    if (f.spc == 0) {
        return -1;
    }
    f.sp0 = func_ov123_020a66fc();
    func_ov123_020a68d8(a4, &f.sp0, 2);
    func_ov123_020a68d8(&data_ov123_020e20e8, a4, 2);
    func_ov123_020a68d8(&data_ov123_020e20e8 + 1, a5, a6);
    func_ov123_020a6c3c(f.sp4, &data_ov123_020e20e8, a6 + 2, a2);
    func_ov123_020a6c0c(f.sp4, a1, a0, a2);
    func_ov123_020a8cac(f.spc);
    return 0;
}

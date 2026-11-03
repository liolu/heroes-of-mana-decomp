/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern s16 data_ov123_020e20e8;

void func_ov123_020a68d8(void *dst, void *src, s32 n);
s32 func_ov123_020a6b98(s32 a, s32 b);
void func_ov123_020a6c3c(void *o, void *x, s32 n, s32 y);
void func_ov123_020a6c0c(void *o, s32 a, s32 b, s32 c);
void func_ov123_020a8000(s32 v);
void func_ov123_020a8cac(s32 a);
s32 func_ov123_020a8cc0(s32 a);

typedef struct {
    u8 buf[8];
    s32 spc8;
    s32 pad;
} Fr8;

s32 func_ov123_020a6ca8(s32 a0, s32 a1, s32 a2, s32 a3, void *a4, void *a5, s32 a6) {
    Fr8 f;
    s32 r;

    f.spc8 = func_ov123_020a8cc0(a2);
    if (f.spc8 == 0) {
        func_ov123_020a8000(2);
        return -1;
    }
    func_ov123_020a68d8(&data_ov123_020e20e8, a4, 2);
    func_ov123_020a68d8(&data_ov123_020e20e8 + 1, a5, a6);
    func_ov123_020a6c3c(f.buf, &data_ov123_020e20e8, a6 + 2, a2);
    func_ov123_020a6c0c(f.buf, a1, a0, a2);
    r = func_ov123_020a6b98(a1, a2);
    if (r != a3) {
        func_ov123_020a8000(0x12);
        func_ov123_020a8cac(f.spc8);
        return -1;
    }
    func_ov123_020a8cac(f.spc8);
    return 0;
}

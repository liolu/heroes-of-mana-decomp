#include "m2c.h"
extern void func_0200fd0c(u32 *);
extern void func_ov123_020a60ec(u32 *);
extern void func_ov123_02094ad0(void *, u32, u32);
extern void func_ov123_02094ac8(void *, u32);
extern void func_ov123_02094a0c(void *, s32);

void func_ov123_020946d0(void *obj) {
    u32 a[9];
    u32 b[5];
    u64 seed;
    u64 v;
    u32 i;
    func_0200fd0c(a);
    for (i = 1; i < 8; i++) {
        a[i] = a[i] ^ a[i - 1];
    }
    seed = a[7];
    func_ov123_020a60ec(b);
    if (b[4] != 0) {
        func_ov123_02094ad0(obj, b[0], b[1]);
    } else {
        func_ov123_02094ad0(obj, b[2], b[3]);
    }
    v = seed * 0x5D588B656C078965ULL + 0x269EC3;
    func_ov123_02094ac8(obj, (u32) (v >> 32));
    func_ov123_02094a0c(obj, 1);
}

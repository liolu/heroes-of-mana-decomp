/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern s16 func_ov123_020a67dc(u16);
extern void func_ov123_020a68d8(s16 *, s32, s16);
extern void func_ov123_020a6d3c(s32, s16 *, s16, s32, s16 *, void *, s32);
extern u8 data_ov123_020e20b8;

void func_ov123_020a6e88(s32 a0, s16 *a1, s32 a2, s16 *a3, s16 *a4, s32 a5) {
    if (a0 == 1) {
        *a4 = 1;
        func_ov123_020a6d3c(a2, a1 + 2, *a3, a5, a1 + 1, &data_ov123_020e20b8, 8);
        *a1 = func_ov123_020a67dc((u16) *a3);
        *a3 = *a3 + 4;
        return;
    }
    func_ov123_020a68d8(a1, a2, *a3);
}

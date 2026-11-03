/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern s32 func_ov123_020a7738(u8 *, u8 *);
extern s32 func_ov123_020a678c(s32);
extern s32 func_ov123_020a67a4(s32);
extern void func_ov123_020a8000(s32);
extern void func_ov123_020a68cc(u8 *, s32, s32);
extern s32 func_ov123_020a72a0(s32, u8 *, s32, u8 *, u8 *);
extern u8 data_ov123_020e27cc[];
extern u8 data_ov123_020e214c[];
extern u8 data_ov123_020e20cc[];

s32 func_ov123_020a79a8(s32 a0, u8 *a1, s32 *cnt, u8 *a3) {
    u8 *r4;
    u8 *r7;
    s32 ret;

    if (a0 != 1) {
        *cnt = *cnt + 1;
        return a0;
    }
    r7  = a1 + 0xC;
    r4  = a1 + 0x24;
    ret = func_ov123_020a7738(a3 + 8, r7 + 0x10);
    if (ret < 0) {
        *cnt = *cnt + 1;
        return a0;
    }
    if (func_ov123_020a678c(*(u16 *) (r4 + 2)) == 0) {
        *cnt = *cnt + 1;
        return a0;
    }
    if (*(u8 *) r4 == 7) {
        if (func_ov123_020a67a4(*(s32 *) (r4 + 4)) == -2) {
            func_ov123_020a8000(0x14);
        } else if (func_ov123_020a67a4(*(s32 *) (r4 + 4)) == -3) {
            func_ov123_020a8000(0x15);
        } else {
            func_ov123_020a8000(0x18);
        }
        return -1;
    }
    func_ov123_020a68cc(data_ov123_020e27cc, 0, 0x6A0);
    ret = func_ov123_020a678c(*(u16 *) (r7 + 0xA));
    ret = func_ov123_020a72a0(0, r4, ret, data_ov123_020e27cc, data_ov123_020e214c);
    if (ret < 0) {
        *cnt = *cnt + 1;
        return a0;
    }
    if ((*(u32 *) (data_ov123_020e20cc + 0xC) & *(u32 *) (data_ov123_020e20cc + 8)) == 0) {
        return a0;
    }
    *cnt = 0;
    return 2;
}

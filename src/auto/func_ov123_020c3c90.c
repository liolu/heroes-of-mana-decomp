/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_020c37f4(s32);
void func_ov123_020c8cb8(void *, s32, s32);
void func_ov123_020c8d2c(void *, s32, u16, u16);
void func_ov123_020c8e38(void *, s32, s32, u8);
s32 func_ov123_020c8f80(void *, s32);
void func_ov123_020c9324(s32, u8, s32);
extern u8 data_ov123_020d82e8[];
extern u8 data_ov123_020d82f8[];
extern u16 data_ov123_020d8308[];
extern void **data_ov123_020e46dc;
void func_ov123_020c3c90(s32 arg0) {
    s32 i = 0;
    s32 a = 0;
    s32 b = 0;
    s32 c = 0;
    s32 k = arg0 * 5;
    do {
        func_ov123_020c9324(1, data_ov123_020d82e8[k + i], func_ov123_020c8f80(data_ov123_020e46dc[i], a));
        func_ov123_020c8cb8(data_ov123_020e46dc[i], -1, b);
        func_ov123_020c8d2c(data_ov123_020e46dc[i], -1, data_ov123_020d8308[i * 2], data_ov123_020d8308[i * 2 + 1]);
        func_ov123_020c8e38(data_ov123_020e46dc[i], -1, c, data_ov123_020d82f8[k + i]);
        i += 2;
    } while (i < 5);
    func_ov123_020c37f4(arg0);
}

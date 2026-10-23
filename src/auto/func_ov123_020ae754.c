/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_020ae628(void);
s32 func_ov123_020c92b0(s32, u8, s32);
void func_ov123_020c8cb8(s32, s32, s32);
void func_ov123_020c8d2c(s32, s32, s32, s32);
extern u8 data_ov123_020d79f8[];
extern s32 *data_ov123_020e45b0;
void func_ov123_020ae754(s32 n, s32 a, s32 b, s32 c) {
    s32 i;
    u8 *t;
    func_ov123_020ae628();
    t = data_ov123_020d79f8 + n * 2;
    for (i = 0; i < 2; i++, t++) {
        data_ov123_020e45b0[i] = func_ov123_020c92b0(0, *t, 1);
        func_ov123_020c8cb8(data_ov123_020e45b0[i], -1, 1);
    }
    func_ov123_020c8d2c(data_ov123_020e45b0[0], -1, a, c);
    func_ov123_020c8d2c(data_ov123_020e45b0[1], -1, b, c);
}

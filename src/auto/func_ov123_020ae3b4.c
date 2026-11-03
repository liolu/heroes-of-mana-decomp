/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020c9c88(s32, s32);
s32 func_ov123_020b29dc(s32, s32);
s32 func_ov123_020ae394(void);
void func_ov123_020c9988(s32, s32, s32, s32, s32, s32, s32, s32);
u8 func_ov123_020b2388(void);
void func_ov123_020c9acc(s32, u16, u16, s32, s32, s32);
void func_ov123_020c98a8(s32);
extern s32 data_ov123_020e45fc;
extern u16 data_ov123_020d79a8[];
extern u16 data_ov123_020d79dc[];

void func_ov123_020ae3b4(s32 arg0, s32 arg1) {
    s32 r4;
    s32 r6;
    s32 e;
    s32 p;
    s32 q;

    r4 = func_ov123_020c9c88(0, 0);
    r6 = func_ov123_020b29dc(data_ov123_020e45fc, arg1);
    e  = func_ov123_020ae394();
    func_ov123_020c9988(r4, data_ov123_020d79a8[0], data_ov123_020d79a8[1], data_ov123_020d79a8[2], data_ov123_020d79a8[3], 2,
                        e, r6);
    p = func_ov123_020b2388();
    q = func_ov123_020b2388();
    func_ov123_020c9acc(r4, data_ov123_020d79dc[p * 2], data_ov123_020d79dc[q * 2 + 1], 2, 0x209, arg0);
    func_ov123_020c98a8(r4);
}

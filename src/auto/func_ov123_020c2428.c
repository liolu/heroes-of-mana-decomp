/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S24 {
    s32 h;
    u8 pad4[8];
    s32 fC;
    u8 pad10[9];
    u8 b19;
    u8 b1A;
    u8 b1B;
} S24;

s32 func_ov123_020c8cb8(s32, s32, s32);
s32 func_ov123_020c8d2c(s32, s32, s32, s32);
s32 func_ov123_020c92b0(s32, u8, s32);
void func_ov123_020ca0cc(s32, s32, void *);
S24 *func_ov123_020ca4ec(s32, s32);
s32 func_ov123_020cb6ac(s32, void *, s32, s32);
extern u8 data_ov123_020d828c[];
extern S24 *data_ov123_020e46c8;
extern u8 func_ov123_020c21c8;

void func_ov123_020c2428(u8 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4) {
    data_ov123_020e46c8      = func_ov123_020ca4ec(0x20, 4);
    data_ov123_020e46c8->b1B = arg0;
    data_ov123_020e46c8->b19 = arg1;
    data_ov123_020e46c8->b1A = arg4;
    func_ov123_020ca0cc(arg2, arg3, (u8 *) data_ov123_020e46c8 + 0x10);
    data_ov123_020e46c8->h = func_ov123_020c92b0(0, data_ov123_020d828c[arg0], 1);
    func_ov123_020c8d2c(data_ov123_020e46c8->h, -1, arg2, arg3 + arg4);
    func_ov123_020c8cb8(data_ov123_020e46c8->h, -1, 1);
    data_ov123_020e46c8->fC = func_ov123_020cb6ac(0, &func_ov123_020c21c8, 0, 0x80);
}

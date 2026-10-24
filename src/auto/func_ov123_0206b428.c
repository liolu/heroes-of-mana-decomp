/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_ov123_0206d318(void);
void func_ov123_0206d3bc(void);
void func_ov123_0206d34c(s16, u16, s32);
s32 func_ov123_0206b578(s32, s32, s32, s32, s32);
void func_ov123_0206d2f8(void);

s32 func_ov123_0206b428(s32 a, s32 b, s32 c) {
    s32 r;
    if (b == 0) {
        return -1;
    }
    func_ov123_0206d318();
    func_ov123_0206d3bc();
    func_ov123_0206d34c(0, 0x35, b);
    r = func_ov123_0206b578(a, 1, c, 0, 0);
    func_ov123_0206d2f8();
    return r;
}

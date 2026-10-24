/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct R {
    s32 a;
    s32 b;
} R;
void func_ov123_0209481c(s32, s32, u8 *);
void func_ov123_02094928(u8 *, s32, s32);
void func_ov123_02094a5c(s32);
s32 func_ov123_02094a94(s32);
s64 func_ov123_02094b0c(s32);

void func_ov123_020942e8(u8 *arg0, s32 arg1) {
    u8 buf[0x24];
    s64 r;
    if (func_ov123_02094a94(arg1) == 3) {
        func_ov123_02094a5c(arg1);
        return;
    }
    if (func_ov123_02094a94(arg1) == 2) {
        r = func_ov123_02094b0c(arg1);
        func_ov123_02094928(buf, (s32) r, (s32) (r >> 32));
        return;
    }
    if (func_ov123_02094a94(arg1) != 1) {
        return;
    }
    func_ov123_0209481c(arg1, *(s32 *) (arg0 + 0x24), buf + 0xd);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02073904(void *);
void func_ov123_0207af6c(s32, s32);

void func_ov123_0207ae2c(void *arg0, u8 *arg1, s32 *arg2) {
    s32 r;

    *arg1 = (u8) *arg2;
    r     = func_ov123_02073904(arg0);
    *arg2 = (s32) *arg1;
    func_ov123_0207af6c(r, -1);
}

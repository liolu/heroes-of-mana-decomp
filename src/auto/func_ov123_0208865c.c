/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_ov123_0207a204(s32);
extern void func_ov123_02087960(void *, s32, s32, s32, s32);
extern void func_ov123_020888fc(void *, s32, s32, s32);
extern void func_ov123_0208aea0(s32 *, s32 *);

void func_ov123_0208865c(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, ...) {
    if (*(s32 *) (arg0 + 0xC) != 5) {
        return;
    }
    func_ov123_0208aea0(&arg1, &arg2);
    if (func_ov123_0207a204(*(s32 *) (arg0 + 0x98)) != 0) {
        func_ov123_02087960(arg0, 0, arg1, arg2, arg3);
        return;
    }
    func_ov123_020888fc(arg0, arg1, arg2, arg3);
}

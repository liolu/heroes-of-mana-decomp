/* compiler: 1.2/sp3 */
#include "m2c.h"

u32 func_ov123_0207b3f4(void);
s32 func_ov123_02087728(void *, void *, s32, s32, s32, s32, s32, s32);
s32 func_ov123_0208a4dc(void *, s32, s32);
u8 *func_ov123_0208ae00(void);

s32 func_ov123_02089278(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *t;

    t = func_ov123_0208ae00();
    if (*(s32 *) (arg0 + 0x2C) != 0 && func_ov123_02087728(arg0, t, arg1, arg2, 1, 0, 0, 0) == 0) {
        return 0;
    }
    if (t == NULL) {
        return 1;
    }
    if (*(s32 *) (t + 0xC) == 0) {
        if (*(u32 *) (t + 0x20) == 0 || (func_ov123_0207b3f4() - *(u32 *) (t + 0x1C)) < *(u32 *) (t + 0x20)) {
            return 1;
        }
        if (func_ov123_0208a4dc(t, 6, 1) == 0) {
            return 0;
        }
    } else if (func_ov123_0208a4dc(t, 2, 1) == 0) {
        return 0;
    }
    return 1;
}

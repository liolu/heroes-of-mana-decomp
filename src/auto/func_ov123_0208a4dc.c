#include "m2c.h"

extern s32 func_ov123_02087b44(void *, s32);
extern s32 func_ov123_02087d14(void *, s32, s32, s32);
extern void func_ov123_0208805c(void *);

s32 func_ov123_0208a4dc(u8 *arg0, s32 arg1, s32 arg2) {
    s32 t = *(s32 *) (arg0 + 0xC);
    if (t < 5) {
        if (*(s32 *) (arg0 + 0x10) != 0) {
            func_ov123_0208805c(arg0);
            if (func_ov123_02087d14(arg0, arg1, 0, 0) == 0) {
                return 0;
            }
        } else {
            if (t == 4) {
                *(s32 *) (arg0 + 0x14) = 1;
            }
            func_ov123_0208805c(arg0);
        }
    } else if (t != 7) {
        func_ov123_0208805c(arg0);
        if (func_ov123_02087b44(arg0, arg2) == 0) {
            return 0;
        }
    }
    return 1;
}

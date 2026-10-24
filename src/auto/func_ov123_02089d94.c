/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 func_ov123_02089eb8();
extern s32 func_ov123_02089efc(void *, s32, s32);
extern s32 func_ov123_02089f68();
extern s32 func_ov123_02089fc0(void *, s32, s32);
extern s32 func_ov123_0208a0d4(void *, s32, s32);
extern s32 func_ov123_0208a1b0(void *, s32, s32);
extern s32 func_ov123_0208a248(void *, s32, s32);

s32 func_ov123_02089d94(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(u16 *) (arg0 + 0x66) = *(u16 *) (arg0 + 0x66) + 1;
    if (arg1 == 0) {
        if (func_ov123_0208a248(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 1) {
        if (func_ov123_0208a1b0(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 2) {
        if (func_ov123_0208a0d4(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 3) {
        if (func_ov123_02089fc0(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 4) {
        if (func_ov123_02089f68() == 0) {
            return 0;
        }
    } else if (arg1 == 5) {
        if (func_ov123_02089efc(arg0, arg2, arg3) == 0) {
            return 0;
        }
    } else if (arg1 == 6) {
        if (func_ov123_02089eb8() == 0) {
            return 0;
        }
    }
    return 1;
}

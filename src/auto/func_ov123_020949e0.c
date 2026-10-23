#include "m2c.h"
extern void func_ov123_02094a38(void *, s32);
extern s32 func_ov123_02094a94(void);
extern s32 func_ov123_02094aac(void *);
void func_ov123_020949e0(void *a) {
    if (func_ov123_02094a94() == 3) {
        s32 t = func_ov123_02094aac(a) | 4;
        func_ov123_02094a38(a, t);
    }
}

#include "m2c.h"

u8 *func_ov123_0209d368(void);
void func_ov123_020a2a0c(s32, s32);

s32 func_ov123_020a2bc8(s32 a, s32 n) {
    s32 i;
    if (func_ov123_0209d368() == 0) {
        return 0;
    }
    for (i = 0; i < n; i++) {
        if (a == ((s32 *) func_ov123_0209d368())[i + 61]) {
            func_ov123_020a2a0c(i, n);
            return 1;
        }
    }
    return 0;
}

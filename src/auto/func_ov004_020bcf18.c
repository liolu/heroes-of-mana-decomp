#include "m2c.h"

M2C_UNK func_ov004_020bcf4c(s32 *, void *);         /* extern */

void func_ov004_020bcf18(void *arg0) {
    s32 sp0;

    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    func_ov004_020bcf4c(&sp0, arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = sp0;
}

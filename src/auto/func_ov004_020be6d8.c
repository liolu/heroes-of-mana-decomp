#include "m2c.h"

M2C_UNK func_ov004_020be79c(void *);                /* extern */
M2C_UNK func_ov004_020be950(void *);                /* extern */
s32 func_ov004_020beac0(s32);                       /* extern */

void func_ov004_020be6d8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8)    = -1;
    M2C_FIELD(arg0, s32 *, 0xC)  = func_ov004_020beac0(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_ov004_020be950(arg0);
    func_ov004_020be79c(arg0);
}

#include "m2c.h"

s32 func_ov004_020bf6ac(s32);                       /* extern */
s32 func_ov004_020bf6c0(s32, s32);                  /* extern */

void func_ov004_020bf194(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 8)    = -1;
    M2C_FIELD(arg0, s32 *, 0xC)  = func_ov004_020bf6ac(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_r0                      = func_ov004_020bf6c0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r0;
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    }
}

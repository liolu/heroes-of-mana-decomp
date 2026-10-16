#include "m2c.h"

M2C_UNK func_ov004_020be79c(void *);                /* extern */
M2C_UNK func_ov004_020be950(void *);                /* extern */
s32 func_ov004_020bead4(s32, s32);                  /* extern */
s32 func_ov004_020becf0();                          /* extern */

void func_ov004_020be728(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8)    = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) < func_ov004_020becf0()) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC)  = func_ov004_020bead4(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        return;
    }
    func_ov004_020be950(arg0);
    func_ov004_020be79c(arg0);
}

#include "m2c.h"

void func_ov123_020d1454(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, u16 *, 0) == M2C_FIELD(arg0, u16 *, 0x2C)) &&
        (M2C_FIELD(arg1, u8 *, 2) == M2C_FIELD(arg0, u8 *, 0x2E)) &&
        (M2C_FIELD(arg1, u8 *, 3) == M2C_FIELD(arg0, u8 *, 0x2F))) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
}

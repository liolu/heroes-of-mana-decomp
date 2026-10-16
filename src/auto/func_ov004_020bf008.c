#include "m2c.h"

void func_ov004_020bf008(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 0x1D);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 0x1E);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 0x1F);
}

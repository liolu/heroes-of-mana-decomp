#include "m2c.h"

void func_ov004_020befe4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x1F) = (u8) M2C_FIELD(arg1, u8 *, 3);
}

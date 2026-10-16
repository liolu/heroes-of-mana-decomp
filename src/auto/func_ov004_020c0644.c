#include "m2c.h"

void func_ov004_020c0644(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0xBC) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0xBD) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0xBE) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0xBF) = (u8) M2C_FIELD(arg1, u8 *, 3);
}

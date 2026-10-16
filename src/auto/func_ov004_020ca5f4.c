#include "m2c.h"

void func_ov004_020ca5f4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x68) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x69) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x6A) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x6B) = (u8) M2C_FIELD(arg1, u8 *, 3);
}

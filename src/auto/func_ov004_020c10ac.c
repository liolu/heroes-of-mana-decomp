#include "m2c.h"

void func_ov004_020c10ac(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x10)  = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x11)  = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x12)  = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x13)  = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, u16 *, 0xB8) = (u16) (M2C_FIELD(arg0, u16 *, 0xB8) | 0x40);
}

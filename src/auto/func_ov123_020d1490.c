#include "m2c.h"

void func_ov123_020d1490(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u8 *, 0x2E)  = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x2F)  = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, u16 *, 0x30) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u8 *, 0x32)  = (u8) M2C_FIELD(arg1, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 0x33)  = (u8) M2C_FIELD(arg1, u8 *, 7);
}

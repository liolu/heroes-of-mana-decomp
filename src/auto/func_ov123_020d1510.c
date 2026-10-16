#include "m2c.h"

void func_ov123_020d1510(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 0x34) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(arg0, u8 *, 0x36)  = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x37)  = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, u16 *, 0x38) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u8 *, 0x3A)  = (u8) M2C_FIELD(arg1, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 0x3B)  = (u8) M2C_FIELD(arg1, u8 *, 7);
}

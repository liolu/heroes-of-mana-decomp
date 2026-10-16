#include "m2c.h"

extern void *data_ov000_02051548;

void func_ov004_020c03e0(void *arg0) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1E0) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x20C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x210) = 1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1E4) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x214) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x218) = 1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1E8) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x21C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x220) = 1;
}

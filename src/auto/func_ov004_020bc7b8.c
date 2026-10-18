#include "m2c.h"

void func_ov004_020bc7b8(void *arg0, s32 arg1) {
    s32 temp_ip;
    s32 var_lr;

    var_lr                                               = 0;
    M2C_FIELD((void *) 0x04000444, volatile s32 *, 0)    = 0;
    M2C_FIELD((void *) 0x04000444, volatile s32 *, 0x28) = 0x80000;
    temp_ip                                              = arg1 >> 3;
    M2C_FIELD((void *) 0x04000444, volatile s32 *, 0x28) = 0x80000;
    M2C_FIELD((void *) 0x04000444, volatile s32 *, 0x28) = 0x80000;
    if (temp_ip > 0) {
        var_lr = M2C_FIELD(arg0, s32 *, 8);
    }
    M2C_FIELD((void *) 0x040004A4, volatile s32 *, 0) =
        (s32) ((M2C_FIELD(arg0, s32 *, 4) * 0x10) | (var_lr << 6) | ((temp_ip + 0x20) << 0x18) | (temp_ip << 0x10));
    M2C_FIELD((void *) 0x040004A4, volatile s32 *, 0x5C) = 1;
}

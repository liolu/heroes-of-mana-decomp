#include "m2c.h"

M2C_UNK func_020103a0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02010434(s32, s32, s32);               /* extern */

void func_0201c8b4(void *arg0, u32 arg1, u32 arg2, s32 arg3) {
    u32 temp_ip;
    u32 temp_r1;
    u32 var_lr;
    u32 var_r2;

    var_r2  = arg2;
    var_lr  = arg1;
    temp_ip = M2C_FIELD(arg0, u32 *, 0);
    if (var_lr < 0x4000U) {
        var_lr = 0x4000;
    }
    if (var_r2 > 0x8000U) {
        var_r2 = 0x8000;
    }
    temp_r1 = temp_ip + M2C_FIELD(arg0, s32 *, 0xC);
    if (var_lr < temp_ip) {
        var_lr = temp_ip;
    }
    if (var_r2 > temp_r1) {
        var_r2 = temp_r1;
    }
    if (var_lr >= var_r2) {
        return;
    }
    if (arg3 != 0) {
        func_020103a0(M2C_FIELD(arg0, s32 *, 8) + var_lr, 0, var_r2 - var_lr);
        return;
    }
    func_02010434(M2C_FIELD(arg0, s32 *, 4) + var_lr, M2C_FIELD(arg0, s32 *, 8) + var_lr, var_r2 - var_lr);
}

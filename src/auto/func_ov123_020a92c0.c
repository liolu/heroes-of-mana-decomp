/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK MIi_CpuCopy16(void *, void *, s32);         /* extern */
extern M2C_UNK data_ov123_020dd540;

void func_ov123_020a92c0(void *arg0, void *arg1) {
    s32 var_r3;
    s32 var_r2;
    void *temp_r0;
    s32 temp_r1;
    u8 *var_r1;

    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, u16 *, 0xA);
    MIi_CpuCopy16(arg0 + 0xC, arg1 + 4, 0x20);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) M2C_FIELD(arg0, u16 *, 0x36);
    MIi_CpuCopy16(arg0 + 4, arg1 + 0x30, 6);
    var_r2 = 0;
    var_r3 = 0;
    var_r1 = (u8 *) (&data_ov123_020dd540);
    do {
        if (M2C_FIELD(arg0, u16 *, 0x30) & M2C_FIELD(var_r1, u16 *, 0)) {
            temp_r0                        = arg1 + var_r2;
            M2C_FIELD(temp_r0, u8 *, 0x3C) = (u8) M2C_FIELD(var_r1, u8 *, 2);
            if (M2C_FIELD(arg0, u16 *, 0x2E) & M2C_FIELD(var_r1, u16 *, 0)) {
                M2C_FIELD(temp_r0, u8 *, 0x3C) = (u8) (M2C_FIELD(temp_r0, u8 *, 0x3C) | 0x80);
            }
            var_r2 += 1;
        }
        var_r1 += 4;
        var_r3 += 1;
    } while (var_r3 < 0xC);
    M2C_FIELD(arg1, s32 *, 0x38) = var_r2;
    M2C_FIELD(arg1, s32 *, 0x4C) = (s32) M2C_FIELD(arg0, u16 *, 0x32);
    temp_r1                      = M2C_FIELD(arg0, u16 *, 0x2C) & 3;
    if (temp_r1 == 1) {
        M2C_FIELD(arg1, s32 *, 0x50) = 1;
        return;
    }
    if (temp_r1 == 2) {
        M2C_FIELD(arg1, s32 *, 0x50) = 2;
        return;
    }
    M2C_FIELD(arg1, s32 *, 0x50) = 0;
}

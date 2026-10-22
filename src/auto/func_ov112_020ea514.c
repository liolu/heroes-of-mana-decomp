#include "m2c.h"

M2C_UNK MIi_CpuClearFast(M2C_UNK, s32, M2C_UNK);    /* extern */
M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
s32 func_0200a7b8();                                /* extern */
s32 func_0200a80c();                                /* extern */
M2C_UNK func_ov112_020eaa90();                      /* extern */
extern M2C_UNK data_ov112_020ec584;
extern M2C_UNK data_ov112_020ec588;
extern s32 data_ov112_020ec9c8[];
extern M2C_UNK data_ov112_020eca1c;
extern M2C_UNK data_ov112_020ed784;

void func_ov112_020ea514(void) {
    s32 var_r2;
    u8 *var_r3;

    MIi_CpuCopy16(data_ov112_020ec9c8[M2C_FIELD(&data_ov112_020ec588, u8 *, 0x482) + 4], func_0200a80c(), 0x800);
    M2C_FIELD(&data_ov112_020ec588, s32 *, 0x488) = (s32) ((M2C_FIELD(&data_ov112_020ec588, s32 *, 0x488) & 0xFFFFF807) | 8);
    MIi_CpuClearFast(0, func_0200a7b8(), 0x800);
    if (M2C_FIELD(&data_ov112_020ec584, u8 *, 2) != 0) {
        *(volatile s32 *) 0x04000010 = 0x01FE0004;
    } else {
        *(volatile s32 *) 0x04000010 = 0x01FE0000;
    }
    func_ov112_020eaa90();
    var_r2                                        = 0;
    M2C_FIELD(&data_ov112_020eca1c, s32 *, 0xD48) = 0;
    M2C_FIELD(&data_ov112_020eca1c, s32 *, 0xD4C) = 0;
    M2C_FIELD(&data_ov112_020eca1c, s32 *, 0xD44) = 0;
    if (M2C_FIELD(&data_ov112_020ec584, u8 *, 2) == 0) {
        return;
    }
    var_r3 = (u8 *) &data_ov112_020ed784;
    do {
        var_r2 += 1;
        M2C_FIELD(var_r3, u16 *, 0x202) = (u16) (M2C_FIELD(var_r3, u16 *, 0x202) & ~3);
        var_r3 += 0x204;
    } while (var_r2 < 0xB);
}

#include "m2c.h"

s16 func_ov119_020ede90(s32, s32);                  /* extern */
M2C_UNK func_ov119_020f09e4(M2C_UNK);               /* extern */
extern M2C_UNK data_ov119_020f2750;
extern u8 *data_ov119_020f2f68;

void func_ov119_020f0a60(void) {
    s32 var_r9;
    s32 var_r10;
    u32 idx;

    var_r9 = 0;
    if ((s32) M2C_FIELD(&data_ov119_020f2750, u16 *, 0) <= 0) {
        return;
    }
    var_r10 = 0;
    do {
        data_ov119_020f2f68                          = M2C_FIELD(&data_ov119_020f2750, s32 *, 4) + var_r10;
        M2C_FIELD(data_ov119_020f2f68, s16 *, 0x24)  = func_ov119_020ede90(var_r9, 0);
        M2C_FIELD(data_ov119_020f2f68, s32 *, 0x20)  = (s32) ((M2C_FIELD(data_ov119_020f2f68, s32 *, 0x20) & ~0xFF) | 7);
        M2C_FIELD(data_ov119_020f2f68, s32 *, 0xF0)  = 0;
        idx                                          = M2C_FIELD(data_ov119_020f2f68, u32 *, 0xF0);
        M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) M2C_FIELD((idx * 0x18) + (u32) data_ov119_020f2f68, u16 *, 0x24);
        func_ov119_020f09e4(0xFF);
        var_r9 += 1;
        idx                                                              = M2C_FIELD(data_ov119_020f2f68, u32 *, 0xF0);
        M2C_FIELD((idx * 0x18) + (u32) data_ov119_020f2f68, u16 *, 0x24) = (u16) M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8);
        var_r10 += 0x4FC;
    } while (var_r9 < (s32) M2C_FIELD(&data_ov119_020f2750, u16 *, 0));
}

#include "m2c.h"

s16 func_ov111_020e5cb4(s32, s32);                  /* extern */
M2C_UNK func_ov111_020e9070(M2C_UNK);               /* extern */
extern M2C_UNK data_ov111_020f13c0;
extern u8 *data_ov111_020f1bd8;

void func_ov111_020e90ec(void) {
    s32 var_r9;
    s32 var_r10;
    u32 idx;

    var_r9 = 0;
    if ((s32) M2C_FIELD(&data_ov111_020f13c0, u16 *, 0) <= 0) {
        return;
    }
    var_r10 = 0;
    do {
        data_ov111_020f1bd8                          = M2C_FIELD(&data_ov111_020f13c0, s32 *, 4) + var_r10;
        M2C_FIELD(data_ov111_020f1bd8, s16 *, 0x38)  = func_ov111_020e5cb4(var_r9, 0);
        M2C_FIELD(data_ov111_020f1bd8, s32 *, 0x34)  = (s32) ((M2C_FIELD(data_ov111_020f1bd8, s32 *, 0x34) & ~0xFF) | 7);
        M2C_FIELD(data_ov111_020f1bd8, s32 *, 0x104) = 0;
        idx                                          = M2C_FIELD(data_ov111_020f1bd8, u32 *, 0x104);
        M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C) = (u16) M2C_FIELD((idx * 0x18) + (u32) data_ov111_020f1bd8, u16 *, 0x38);
        func_ov111_020e9070(0xFF);
        var_r9 += 1;
        idx                                                              = M2C_FIELD(data_ov111_020f1bd8, u32 *, 0x104);
        M2C_FIELD((idx * 0x18) + (u32) data_ov111_020f1bd8, u16 *, 0x38) = (u16) M2C_FIELD(data_ov111_020f1bd8, u16 *, 0x50C);
        var_r10 += 0x510;
    } while (var_r9 < (s32) M2C_FIELD(&data_ov111_020f13c0, u16 *, 0));
}

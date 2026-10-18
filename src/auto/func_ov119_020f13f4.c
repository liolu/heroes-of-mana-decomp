#include "m2c.h"

M2C_UNK func_ov119_020f1334(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov119_020f1e60;
extern M2C_UNK data_ov119_020f1ee0;

void func_ov119_020f13f4(void) {
    s32 var_r4;
    u8 *var_r5;
    u8 *var_r6;

    var_r5 = (u8 *) &data_ov119_020f1e60;
    var_r6 = (u8 *) (&data_ov119_020f1ee0);
    var_r4 = 0;
    do {
        func_ov119_020f1334(var_r5);
        func_ov119_020f1334(var_r6);
        func_ov119_020f1334(var_r6 + 0x1C);
        var_r4 += 1;
        var_r5 += 0x1C;
        var_r6 += 0x38;
    } while (var_r4 < 2);
    if (((u32) (M2C_FIELD(&data_ov119_020f1e60, s32 *, 0) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    if (((u32) (M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x1C) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x14) = (s32) M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x30);
    M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x18) = (s32) M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x34);
}

#include "m2c.h"

M2C_UNK func_020037e8();                            /* extern */
extern s32 data_ov119_020f1e40;
extern M2C_UNK data_ov119_020f1e50;
extern M2C_UNK data_ov119_020f2028;

void func_ov119_020ed010(s32 arg0) {
    s32 temp_r2;
    s32 temp_r2_2;
    u32 temp_r3;
    void *temp_r1;

    temp_r3 = (u32) (M2C_FIELD(&data_ov119_020f1e50, s32 *, 0) << 0x16) >> 0x18;
    if (temp_r3 & 1) {
        temp_r2                         = (arg0 * 0x118) + (s32) &data_ov119_020f2028;
        M2C_FIELD(temp_r2, s32 *, 0x6C) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x6C) | 0x20000);
    }
    if (temp_r3 & 2) {
        temp_r2_2                         = (arg0 * 0x118) + (s32) &data_ov119_020f2028;
        M2C_FIELD(temp_r2_2, s32 *, 0xD8) = (s32) (M2C_FIELD(temp_r2_2, s32 *, 0xD8) | 0x20000);
    }
    M2C_FIELD((data_ov119_020f1e40 + (arg0 * 0x410)), s32 *, 0x1448) = 0;
    temp_r1                                                          = data_ov119_020f1e40 + (arg0 * 0x410);
    M2C_FIELD(&data_ov119_020f1e50, s32 *, 4)                        = (s32) M2C_FIELD(temp_r1, s32 *, 0x1448);
    M2C_FIELD(temp_r1, u32 *, 0x144C)         = (u32) ((u32) (M2C_FIELD(&data_ov119_020f1e50, s32 *, 0) << 6) >> 0x10);
    M2C_FIELD(&data_ov119_020f1e50, s32 *, 8) = (s32) M2C_FIELD((data_ov119_020f1e40 + (arg0 * 0x410)), s32 *, 0x144C);
    if (M2C_FIELD(&data_ov119_020f1e50, s32 *, 0xC) == 0) {
        return;
    }
    func_020037e8();
}

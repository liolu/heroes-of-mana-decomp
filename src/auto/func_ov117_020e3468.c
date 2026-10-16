#include "m2c.h"

M2C_UNK func_ov117_020ea064();                      /* extern */
extern M2C_UNK data_ov117_020f0ee0;
extern M2C_UNK data_ov117_020f12e0;
extern M2C_UNK data_ov117_020f1ce0;
extern M2C_UNK data_ov117_020f1ee0;
extern M2C_UNK data_ov117_020f22e0;
extern M2C_UNK data_ov117_020f3ce0;

void func_ov117_020e3468(void) {
    s32 temp_lr;

    M2C_FIELD(&data_ov117_020f1ee0, s32 *, 0xFB0) =
        (s32) ((((M2C_FIELD(&data_ov117_020f1ee0, s32 *, 0xFB0) & ~0x01000000) | 0x06000000) & 0xFF0000FF) | 0x700);
    M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x42C) = (s32) (M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x42C) & ~0x10000);
    temp_lr                                       = M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0xE0) & ~2;
    M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0xE0)  = temp_lr;
    M2C_FIELD(&data_ov117_020f22e0, u16 *, 0xFE)  = (u16) (M2C_FIELD(&data_ov117_020f22e0, u16 *, 0xFE) & ~0x100);
    M2C_FIELD(&data_ov117_020f1ce0, u16 *, 0x9A)  = (u16) (M2C_FIELD(&data_ov117_020f1ce0, u16 *, 0x9A) & ~0x100);
    M2C_FIELD(&data_ov117_020f3ce0, u16 *, 0xD6)  = (u16) (M2C_FIELD(&data_ov117_020f3ce0, u16 *, 0xD6) & ~0x100);
    M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x204) = (s32) (M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0x204) & ~1);
    M2C_FIELD(&data_ov117_020f12e0, u16 *, 0x32)  = (u16) ((M2C_FIELD(&data_ov117_020f12e0, u16 *, 0x32) & 0xFFFFFE01) | 0xCA);
    M2C_FIELD(&data_ov117_020f0ee0, u16 *, 0x36)  = (u16) ((M2C_FIELD(&data_ov117_020f0ee0, u16 *, 0x36) & 0xFFFFFE01) | 0xCA);
    M2C_FIELD(&data_ov117_020f0ee0, s32 *, 0xE0)  = (s32) (temp_lr & ~0x3FC);
    func_ov117_020ea064();
}

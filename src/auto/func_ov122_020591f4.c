#include "m2c.h"

M2C_UNK func_ov122_02054d5c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_02054db8();                      /* extern */
M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov122_02056af8(M2C_UNK);                   /* extern */
M2C_UNK func_ov122_02058710();                      /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_020591f4(void) {
    func_ov122_02054db8();
    func_ov122_02058710();
    if (((u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDDC) << 0x10) >> 0x18) != 0) {
        func_ov122_02054e24(0x48, 0xA8, func_ov122_02056af8(0x12) + 0x3C, 1);
    }
    if ((u32) ((u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDDC) << 0x10) >> 0x18) <
        (u32) (((u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDDC) << 8) >> 0x18) - 1)) {
        func_ov122_02054e24(0xB8, 0xA8, func_ov122_02056af8(0x13) + 0x3A, 1);
    }
    func_ov122_02054e24(0xD4, 0x14, func_ov122_02056af8(0x11) + 0x29, 1);
    func_ov122_02054d5c(0, 0x400);
}

#include "m2c.h"

M2C_UNK func_ov122_02054d5c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_02054db8();                      /* extern */
M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov122_02056af8(M2C_UNK);                   /* extern */
M2C_UNK func_ov122_02058710();                      /* extern */

void func_ov122_0205914c(void) {
    func_ov122_02054db8();
    func_ov122_02058710();
    func_ov122_02054e24(0x80, 0x40, func_ov122_02056af8(0xC) + 0x40, 1);
    func_ov122_02054e24(0x80, 0x60, func_ov122_02056af8(0xD) + 0x42, 1);
    func_ov122_02054e24(0x80, 0x80, func_ov122_02056af8(0xE) + 0x44, 1);
    func_ov122_02054e24(0x80, 0xA0, func_ov122_02056af8(0xF) + 0x46, 1);
    func_ov122_02054e24(0xD8, 0x18, func_ov122_02056af8(0x10) + 0x2F, 1);
    func_ov122_02054d5c(0, 0x400);
}

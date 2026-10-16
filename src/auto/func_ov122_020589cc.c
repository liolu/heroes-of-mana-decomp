#include "m2c.h"

M2C_UNK func_ov122_02054d5c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_02054db8();                      /* extern */
M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov122_02056af8(M2C_UNK);                   /* extern */
M2C_UNK func_ov122_02058710();                      /* extern */

void func_ov122_020589cc(void) {
    func_ov122_02054db8();
    func_ov122_02058710();
    func_ov122_02054e24(0x48, 0xA8, func_ov122_02056af8(0x2F) + 0x2B, 1);
    func_ov122_02054e24(0xB8, 0xA8, func_ov122_02056af8(0x30) + 0x2D, 1);
    func_ov122_02054d5c(0, 0x400);
}

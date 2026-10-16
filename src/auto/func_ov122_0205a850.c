#include "m2c.h"

M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov122_02056af8(M2C_UNK);                   /* extern */
M2C_UNK func_ov122_02058710();                      /* extern */

void func_ov122_0205a850(void) {
    func_ov122_02058710();
    func_ov122_02054e24(0x70, 0x18, 0x39, 1);
    func_ov122_02054e24(0xD4, 0x14, func_ov122_02056af8(0x1B) + 0x29, 1);
    func_ov122_02054e24(0x83, 0x14, func_ov122_02056af8(0x1C) + 0x33, 1);
    func_ov122_02054e24(0x9B, 0x14, func_ov122_02056af8(0x1D) + 0x35, 1);
    func_ov122_02054e24(0xB3, 0x14, func_ov122_02056af8(0x1E) + 0x37, 1);
}

#include "m2c.h"

M2C_UNK func_ov122_02054d5c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_02054db8();                      /* extern */
M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov122_02056af8(M2C_UNK);                   /* extern */

void func_ov122_02058c54(void) {
    func_ov122_02054db8();
    func_ov122_02054e24(0xD4, 0xA8, func_ov122_02056af8(4) + 0x31, 1);
    func_ov122_02054e24(0x80, 0x78, 0x7C, 1);
    func_ov122_02054d5c(0, 0x400);
}

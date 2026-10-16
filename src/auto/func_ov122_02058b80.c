#include "m2c.h"

M2C_UNK func_ov122_02054d5c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_02054db8();                      /* extern */
M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov122_02056af8(M2C_UNK);                   /* extern */
M2C_UNK func_ov122_02058710();                      /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_02058b80(void) {
    func_ov122_02054db8();
    switch (M2C_FIELD(&data_ov122_02065604, u32 *, 0xE30)) {
        default:
            break;
        case 0:
        case 1:
        case 2:
        case 3:
            func_ov122_02054e24(0x80, 0xA8, func_ov122_02056af8(3) + 0x96, 1);
            break;
        case 4:
        case 6:
            func_ov122_02058710();
            func_ov122_02054e24(0x80, 0xA8, func_ov122_02056af8(0x33) + 0x96, 1);
            break;
        case 5:
        case 7:
        case 8:
            func_ov122_02058710();
            func_ov122_02054e24(0x80, 0xA8, func_ov122_02056af8(0x33) + 0x3A, 1);
            break;
    }
    func_ov122_02054d5c(0, 0x400);
}

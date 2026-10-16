#include "m2c.h"

M2C_UNK func_ov122_02054934(u16, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_ov122_02054d5c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_02054db8();                      /* extern */
M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_ov122_02056af8(M2C_UNK);                   /* extern */
M2C_UNK func_ov122_02058710();                      /* extern */
extern M2C_UNK data_ov122_020647c0;

void func_ov122_02058d98(void) {
    func_ov122_02054db8();
    func_ov122_02058710();
    func_ov122_02054e24(0x80, 0xA8, func_ov122_02056af8(8) + 0x3A, 1);
    func_ov122_02054934((u16) M2C_FIELD(&data_ov122_020647c0, s32 *, 8), 0x50, 0x74, 4, 0, 1);
    func_ov122_02054d5c(0, 0x400);
}

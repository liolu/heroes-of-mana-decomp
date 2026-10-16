#include "m2c.h"

M2C_UNK func_ov122_02054d5c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov122_02054db8();                      /* extern */
M2C_UNK func_ov122_02054e24(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov122_02058710();                      /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_02059848(void) {
    func_ov122_02054db8();
    func_ov122_02058710();
    if (((u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDDC) * 0x10) >> 0x1F) != 0) {
        func_ov122_02054e24(0x80, 0x78, 0x7C, 0);
    }
    func_ov122_02054d5c(0, 0x400);
}

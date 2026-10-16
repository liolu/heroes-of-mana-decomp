#include "m2c.h"

M2C_UNK func_ov122_020548fc(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_02058978(void) {
    if (((u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) << 0x1A) >> 0x1F) == 0) {
        return;
    }
    func_ov122_020548fc(M2C_FIELD(&data_ov122_02065604, s32 *, 0xDEC), 0xC8, 0x82, 5, 0, 0, 0xF);
}

#include "m2c.h"

M2C_UNK func_ov122_02055780(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_0205ce70(s32 arg0) {
    if ((arg0 != 0x80000000) || (((u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) << 0x13) >> 0x1F) == 0)) {
        func_ov122_02055780(-0x10, 3, 1);
        M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) | 0x1000);
        return;
    }
    func_ov122_02055780(-0x10, 1, 1);
}

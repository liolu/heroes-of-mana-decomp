#include "m2c.h"

M2C_UNK func_ov122_020556bc(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov122_0205af2c();                      /* extern */
M2C_UNK func_ov122_0205b190();                      /* extern */
M2C_UNK func_ov122_0205b384();                      /* extern */
M2C_UNK func_ov122_0205ce70(s32);                   /* extern */
extern M2C_UNK data_ov122_02065604;

void func_ov122_0205cd90(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 0) {
        func_ov122_0205ce70(arg1);
    }
    if (arg1 != 0x80000000) {
        M2C_FIELD(&data_ov122_02065604, s32 *, 0xDD4) = arg1;
        func_ov122_0205b384();
    }
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xDD4) = arg0;
    func_ov122_0205b384();
    func_ov122_0205af2c();
    func_ov122_0205b190();
    if (arg1 == 0x80000000) {
        if (((u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) << 0x12) >> 0x1F) == 0) {
            func_ov122_020556bc(-0x10, 3, 1);
            M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) | 0x2000);
            return;
        }
        func_ov122_020556bc(-0x10, 1, 1);
        return;
    }
    func_ov122_020556bc(-0x10, 3, 1);
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) | 0x2000);
}

#include "m2c.h"

M2C_UNK func_ov122_0205d9d0(M2C_UNK, M2C_UNK);
extern M2C_UNK data_ov122_02065604;

void func_ov122_0205dafc(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xE34) = arg0;
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xE30) = 1;
    func_ov122_0205d9d0(arg0, arg1);
}

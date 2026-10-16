#include "m2c.h"

extern M2C_UNK data_ov122_02062b24;

void func_ov122_0205b364(s32 arg0) {
    if (arg0 & 0x2000) {
        return;
    }
    M2C_FIELD(&data_ov122_02062b24, s32 *, 4) = (s32) (M2C_FIELD(&data_ov122_02062b24, s32 *, 4) & ~0x10000);
}

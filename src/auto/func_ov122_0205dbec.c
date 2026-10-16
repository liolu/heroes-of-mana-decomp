#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov122_02065604;
extern M2C_UNK data_ov122_020664b0;

void func_ov122_0205dbec(void) {
    M2C_FIELD(&data_ov122_020664b0, s32 *, 0)     = 0;
    M2C_FIELD(&data_ov122_020664b0, s32 *, 0xC)   = 0;
    M2C_FIELD(&data_ov122_020664b0, s32 *, 4)     = 0;
    M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) = (s32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) | 0x800);
    if (data_ov000_02051548 != NULL) {
        M2C_FIELD(&data_ov122_020664b0, s32 *, 8) = (s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x1A0);
    }
}

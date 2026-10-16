#include "m2c.h"

extern M2C_UNK data_ov121_020f77e4;

void func_ov121_020ec598(void) {
    M2C_FIELD(&data_ov121_020f77e4, s32 *, 8) =
        (s32) ((M2C_FIELD(&data_ov121_020f77e4, s32 *, 0xC) * M2C_FIELD(&data_ov121_020f77e4, s32 *, 8)) +
               M2C_FIELD(&data_ov121_020f77e4, s32 *, 0x10));
}

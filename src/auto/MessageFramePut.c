/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MesFrameChrLoad(s32);                   /* extern */
M2C_UNK putOneSomeFrame(s32, s32, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_ov000_020510e8;
extern s32 data_ov000_02051550;

void MessageFramePut(void *arg0, void *arg1, s32 arg5) {
    s32 temp_r1;
    s32 temp_r4;
    void *temp_r3;

    temp_r1 = arg1;
    MesFrameChrLoad(temp_r1);
    temp_r4 = temp_r1 * 0xD0;
    putOneSomeFrame(arg0, M2C_FIELD((data_ov000_02051550 + temp_r4), s32 *, 0xC4), 0, temp_r1, 0);
    temp_r3                                                 = data_ov000_02051550 + temp_r4;
    M2C_FIELD(temp_r3, s32 *, 0x54)                         = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x54) & ~3) | 1);
    M2C_FIELD((data_ov000_02051550 + temp_r4), s32 *, 0x48) = 1;
}

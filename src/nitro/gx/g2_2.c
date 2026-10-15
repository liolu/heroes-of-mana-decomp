#include "m2c.h"

void G2x_SetBlendBrightness_(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 < 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0xC0);
        M2C_FIELD(arg0, s16 *, 4) = (s16) (-arg2);
    } else {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0x80);
        M2C_FIELD(arg0, s16 *, 4) = (s16) arg2;
    }
}

void G2x_SetBlendBrightnessExt_(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (arg3 | (arg4 << 8));
    if (arg5 < 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0xC0 | (arg2 << 8));
        M2C_FIELD(arg0, s16 *, 4) = (s16) (0 - arg5);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0x80 | (arg2 << 8));
    M2C_FIELD(arg0, s16 *, 4) = (s16) arg5;
}

void G2x_ChangeBlendBrightness_(void *arg0, s32 arg1) {
    s32 temp_r2;
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0);
    temp_r2 = temp_r3 & 0xC0;
    if (arg1 < 0) {
        if (temp_r2 == 0x80) {
            M2C_FIELD(arg0, u16 *, 0) = (u16) ((temp_r3 & ~0xC0) | 0xC0);
        }
        M2C_FIELD(arg0, s16 *, 4) = (s16) (0 - arg1);
        return;
    }
    if (temp_r2 == 0xC0) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) ((temp_r3 & ~0xC0) | 0x80);
    }
    M2C_FIELD(arg0, s16 *, 4) = (s16) arg1;
}

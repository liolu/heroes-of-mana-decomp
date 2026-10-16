#include "m2c.h"

extern M2C_UNK SDK_AUTOLOAD_DTCM_START;
extern M2C_UNK data_ov119_020f2258;
extern M2C_UNK data_ov119_020f2f68;

void func_ov119_020f0508(void) {
    M2C_FIELD(&SDK_AUTOLOAD_DTCM_START, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&SDK_AUTOLOAD_DTCM_START, s32 *, 0x3FF8) | 1);
    *(s32 *) 0x04000010 = 0x01FF0000 & ((M2C_FIELD(&data_ov119_020f2258, s32 *, 0x438) - 0xF0) << 0x10);
    if (!(M2C_FIELD(&data_ov119_020f2f68, s32 *, 4) & 3)) {
        if ((s32) M2C_FIELD(&data_ov119_020f2258, s32 *, 0x438) < (s32) M2C_FIELD(&data_ov119_020f2f68, s32 *, 8)) {
            if (!(M2C_FIELD(&data_ov119_020f2258, s32 *, 0x438) & 0xFF)) {
                M2C_FIELD(&data_ov119_020f2258, s32 *, 0x43C) = (s32) (M2C_FIELD(&data_ov119_020f2258, s32 *, 0x43C) + 1);
            }
            M2C_FIELD(&data_ov119_020f2258, s32 *, 0x438) = (s32) (M2C_FIELD(&data_ov119_020f2258, s32 *, 0x438) + 1);
        } else {
            M2C_FIELD(&data_ov119_020f2258, s32 *, 0x34) = (s32) (M2C_FIELD(&data_ov119_020f2258, s32 *, 0x34) | 0x20000);
        }
    }
    M2C_FIELD(&data_ov119_020f2f68, s32 *, 4) = (s32) (M2C_FIELD(&data_ov119_020f2f68, s32 *, 4) + 1);
}

#include "m2c.h"

M2C_UNK MIi_CpuCopy16(void *, void *, s32);        /* extern */
extern u16 data_ov113_020e4d6c[];

void func_ov113_020e1c08(s32 arg0) {
    s32 i;

    if (arg0 >= 7) {
        arg0 = 7;
    }
    for (i = 0; i < 4; i++) {
        MIi_CpuCopy16((u16 *) ((u8 *) data_ov113_020e4d6c + i * 0x100) + (arg0 << 4), (void *) (0x05000480 + i * 0x20), 0x20);
    }
}

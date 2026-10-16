#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov121_020f5d60;

u32 func_ov121_020ef800(void) {
    s32 var_r0;

    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) * 8) >> 0x1F) == 0) {
        var_r0 = M2C_FIELD(&data_ov121_020f5d60, s32 *, 0x58);
    } else {
        var_r0 = M2C_FIELD(&data_ov121_020f5d60, s32 *, 0xB4);
    }
    return (u32) (var_r0 << 0xE) >> 0x1C;
}

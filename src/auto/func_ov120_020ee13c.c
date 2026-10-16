#include "m2c.h"

extern s32 data_ov120_020f4204;
extern s32 data_ov120_020f4208;
extern M2C_UNK data_ov120_020f46dc;

s32 func_ov120_020ee13c(s32 arg0) {
    if (((u32) (M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) << 9) >> 0x1F) != 0) {
        return data_ov120_020f4208;
    }
    return (0x14 * arg0) + data_ov120_020f4204;
}

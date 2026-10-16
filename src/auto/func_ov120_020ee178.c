#include "m2c.h"

extern s32 data_ov120_020f4200;
extern s32 data_ov120_020f420c;
extern M2C_UNK data_ov120_020f46dc;

s32 func_ov120_020ee178(s32 arg0) {
    if (((u32) (M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) << 9) >> 0x1F) != 0) {
        return data_ov120_020f4200;
    }
    return (0xC * arg0) + data_ov120_020f420c;
}

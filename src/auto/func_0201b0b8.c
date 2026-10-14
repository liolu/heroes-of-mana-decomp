#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201c3a4(M2C_UNK);

extern s32 data_020415ec;

s32 func_0201b0b8(s32 arg0) {
    if ((data_020415ec != 0) && (func_0201c3a4(arg0) != 0) &&
        (M2C_FIELD((data_020415ec + ((arg0 - 1) * 4)), s32 *, 0x14E8) == 7)) {
        return 1;
    }
    return 0;
}

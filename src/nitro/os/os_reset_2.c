#include "m2c.h"

M2C_UNK func_0200fddc();

extern s16 OSi_IsResetOccurred;

void OSi_CommonCallback(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        OSi_IsResetOccurred = 1;
        return;
    }
    func_0200fddc();
}

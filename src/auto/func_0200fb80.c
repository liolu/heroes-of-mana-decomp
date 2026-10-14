#include "m2c.h"

M2C_UNK func_0200fddc();                            /* extern */
extern s16 data_020389a4;

void func_0200fb80(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_020389a4 = 1;
        return;
    }
    func_0200fddc();
}

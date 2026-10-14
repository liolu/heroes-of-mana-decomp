#include "m2c.h"

M2C_UNK func_0200fddc();                            /* extern */
extern s16 data_0204163c;

void func_020202a4(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_0204163c = 1;
        return;
    }
    func_0200fddc();
}

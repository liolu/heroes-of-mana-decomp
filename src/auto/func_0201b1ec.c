#include "m2c.h"

M2C_UNK func_0201b238(s32, s32, M2C_UNK);           /* extern */
s32 func_0201c3a4();                                /* extern */
extern s32 data_020415ec;

void func_0201b1ec(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_0201c3a4() != 0) {
        M2C_FIELD((data_020415ec + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_0201b238(arg0, arg1, arg2);
}

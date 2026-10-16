#include "m2c.h"

M2C_UNK func_ov115_020e675c(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern s32 data_ov115_020e9160;

void func_ov115_020e5124(s32 arg0) {
    data_ov115_020e9160 = 0x110;
    func_ov115_020e675c(2, arg0 + 6, 0xA, 4, 0, 0);
    func_ov115_020e675c(2, arg0 + 0xA, 0xB, 4, 0, 0);
    func_ov115_020e675c(2, arg0 + 0xE, 0xC, 4, 0, 0);
    func_ov115_020e675c(2, arg0 + 0x12, 0xD, 4, 0, 0);
}

#include "m2c.h"

M2C_UNK func_0200f1f4(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_0201fd5c();                                /* extern */
extern s32 data_02041638;

void func_0201fff4(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_0200fa98();
    data_02041638 = arg0;
    if (func_0201fd5c() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_0200f1f4(0xF000, var_r1);
    }
    func_0200faac(temp_r4);
}

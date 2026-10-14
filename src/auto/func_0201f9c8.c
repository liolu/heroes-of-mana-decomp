#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_0201f814();                                /* extern */
M2C_UNK func_0201f85c(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_02041620;

void func_0201f9c8(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if (func_0201f814() != 0) {
        func_0201f85c(data_02041620 + 0xC4, 0, arg0, 0);
    }
    func_0200faac(temp_r4);
}

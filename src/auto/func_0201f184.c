#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK func_0201f108();                            /* extern */
extern M2C_UNK data_020415e0;

void func_0201f184(void) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if (M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 0xC), s32 *, 0x1320) == 0) {
        func_0200fddc();
    }
    func_0201f108();
    func_0200faac(temp_r4);
}

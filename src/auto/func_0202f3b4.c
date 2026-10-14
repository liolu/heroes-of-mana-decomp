#include "m2c.h"

M2C_UNK func_0202fc58(M2C_UNK *, M2C_UNK **, M2C_UNK *); /* extern */
extern u8 data_02036450;
extern M2C_UNK data_02036484;
extern M2C_UNK data_020364c0;
extern M2C_UNK func_0202f3f4;

void func_0202f3b4(void) {
    M2C_UNK *sp0;

    if (data_02036450 == 0) {
        return;
    }
    sp0 = &data_02036484;
    func_0202fc58(&data_020364c0, &sp0, &func_0202f3f4);
}

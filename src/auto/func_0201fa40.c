#include "m2c.h"

M2C_UNK func_020103a0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_02041624;

void func_0201fa40(s32 arg0) {
    M2C_FIELD(&data_02041624, s32 *, 4) = arg0;
    func_020103a0(arg0, 0, 0x21C);
}

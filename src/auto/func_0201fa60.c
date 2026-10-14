#include "m2c.h"

M2C_UNK func_020103a0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_02041624;

void func_0201fa60(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(&data_02041624, s32 *, 4) == 0) {
        return;
    }
    temp_r4 = arg0 - 1;
    func_020103a0(M2C_FIELD(&data_02041624, s32 *, 4) + (temp_r4 << 5), 0, 0x1E);
    M2C_FIELD((M2C_FIELD(&data_02041624, s32 *, 4) + (temp_r4 * 4)), s32 *, 0x1E0) = 0;
}

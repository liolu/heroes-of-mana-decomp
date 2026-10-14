#include "m2c.h"

M2C_UNK func_0201185c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0201867c();                                /* extern */
s32 func_020186e0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02018b20();                            /* extern */
extern M2C_UNK data_0203b000;

s32 func_02018490(void) {
    s32 temp_r0;

    if (func_0201867c() != 0) {
        return 3;
    }
    temp_r0 = func_020186e0(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02018b20();
    func_0201185c(0xA, 0);
    M2C_FIELD(&data_0203b000, s32 *, 4) = 0;
    M2C_FIELD(&data_0203b000, s16 *, 0) = 0;
    return 0;
}
